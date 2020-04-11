# Github-Documentation-With-Doxygen

## Documentation Setup
Skip this if you already have doxygen configured 
* Create doxygen config file (Doxyfile). Run `doxygen -g`
* Configure `Doxyfile`
    * Set `RECURSIVE` to true
    * Set Exclude Path and Explude patterns to exclude directories you don't want documented. Typically library codes and plugins come here. 
* Document your code according to Doxygen guidlines
    * 
* Run `doxygen` to generate documentation
    * By default web documentation and pdf documentation files are generated in `html` and `latex` directories respectively.
    * View web documenation at `html/index.html`
    * Compile pdf documentation by running `make` in `latex` directory
