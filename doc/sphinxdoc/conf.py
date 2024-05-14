# Configuration file for the Sphinx documentation builder.

# -- Project information

project = 'Essentia'
copyright = '2024, Essentia'
author = 'MTG'

release = '2.1-beta6-dev'
version = '2.1-beta6-dev'

# -- General configuration

extensions = [
    'sphinx.ext.duration',
    'sphinx.ext.doctest',
    'sphinx.ext.autodoc',
    'sphinx.ext.autosummary',
    'sphinx.ext.intersphinx',
]

intersphinx_mapping = {
    'python': ('https://docs.python.org/3/', None),
    'sphinx': ('https://www.sphinx-doc.org/en/master/', None),
}
intersphinx_disabled_domains = ['std']

templates_path = ['_templates']

# -- Options for HTML output

html_theme = 'sphinx_rtd_theme'

# -- Options for EPUB output
epub_show_urls = 'footnote'

# Sidebar templates
html_sidebars = {
    'index': [],
    '**': [
        'about.html',
        'localtoc.html',
        'navigation.html',
        'relations.html',
        'searchbox.html',
    ]
}

# Additional templates that should be rendered to pages, maps page names to
# template names.
html_additional_pages = {
                         'algorithms_reference': 'algorithms_reference.html',
                         'applications': 'applications.html',
                         'documentation': 'documentation.html'}


# exec(compile(open("essentia_reference.py").read(), "essentia_reference.py", 'exec'))
# html_additional_pages.update(essentia_algorithms)

