/*
 * Copyright (C) 2006-2021  Music Technology Group - Universitat Pompeu Fabra
 *
 * This file is part of Essentia
 *
 * Essentia is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Affero General Public License as published by the Free
 * Software Foundation (FSF), either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the Affero GNU General Public License
 * version 3 along with this program.  If not, see http://www.gnu.org/licenses/
 */
#include "directscaletransform.h"
#include "essentiamath.h"

#define FOR(i,l,r) for(int i=l; i<r; i++)

using namespace essentia;
using namespace standard;

const char* DirectScaleTransform::name = "DirectScaleTransform";
const char* DirectScaleTransform::category = "Standard";
const char* DirectScaleTransform::description = 
DOC("Computes Direct Scale Transform on a given matrix.\n" 
    "This code was derived from the original DST paper:\n"
    "[1] Williams, W. J., and E. J. Zalubas. Helicopter transmission fault detection via "
    "time-frequency, scale and spectral methods. Mechanical systems and signal processing"
    "14.4 (2000): 545-559.");

void DirectScaleTransform::configure() {
    _C = parameter("C").toInt();
    _fs = parameter("fs").toInt();
}


void DirectScaleTransform::compute() {

    const std::vector<std::vector<Real>>& matrix = _matrix.get();
    std::vector<std::vector<Real>>& result = _result.get();


    std::complex<Real> zi = 1i;
    int N = matrix.size();
    Real step = M_PI/log(N+1);
    int num_rows = _C/step;
    result.resize(num_rows, std::vector<Real>(N-1, 0));

    // Compute Scale Transform Matrix
    std::vector<std::vector< std::complex<Real>>> dst_mat(num_rows, vector<std::complex<Real>>(N-1, 0));
    Real Ts = 1/_fs;
    FOR(i, 0, num_rows) {
        FOR(j, 0, N-1) {
            Real c = step * i;
            Real k = j + 1;
            std::complex<Real> k_ = std::complex<Real>(k * Ts);
            std::complex<Real> c_ = std::complex<Real>(0.5) - zi * c; 

            std::complex<Real> M = pow(k_, c_)/(c_ * sqrt(2*M_PI));
            dst_mat[i][j] = M;
        }
    }
    
    // First Order Difference of the input matrix
    int P = matrix[0].size();
    std::vector<std::vector<Real>> diff_matrix(N-1, std::vector<Real>(P, 0));
    FOR(i, 0, N-1) FOR(j, 0, P) diff_matrix[i][j] = matrix[i][j] - matrix[i+1][j];

    // Matrix Multiplication of DST matrix and the first order difference matrix
    std::vector<std::vector<std::complex<Real>>> result_mat(num_rows, std::vector<std::complex<Real>>(P, 0));
    FOR(i, 0, num_rows) FOR(j, 0, P) {
            std::complex<Real> sum = 0;
            FOR(k, 0, N-1) sum += dst_mat[i][k] * diff_matrix[k][j];
            result_mat[i][j] = sum;
        }

    // Absolute value of the result matrix
    FOR(i, 0, num_rows) FOR(j, 0, P) result[i][j] = std::abs(result_mat[i][j]);
}

// vector<vector< std::complex<double> >> DirectScaleTransform(int N=10, int C=6, int fs=1) {
//     std::complex<double> zi = 1i;
//     double step = M_PI/log(N+1);
//     int num_rows = C/step;

//     vector<vector< std::complex<double> >> result(num_rows, vector< std::complex<double> >(N-1, 0));
//     double Ts = 1/fs;

//     FOR(i, 0, num_rows) {
//         FOR(j, 0, N-1) {
//             double c = step * i;
//             double k = j + 1;
//             std::complex<double> k_ = std::complex<double>(k * Ts);
//             std::complex<double> c_ = std::complex<double>(0.5) - zi * c; 

//             std::complex<double> M = pow(k_, c_)/(c_ * sqrt(2*M_PI));
//             result[i][j] = M;
//         }
//     }
//     return result;
// }

// int main() {
//     vector<vector< std::complex<double> >> result = DirectScaleTransform();
//     for(auto row: result){
//         for(auto elem: row){
//             cout << elem.real() << "+" << elem.imag() << "j ";
//         }
//         cout << endl;
//     }
//     return 0;
// }