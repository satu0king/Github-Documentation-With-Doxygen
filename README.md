# Github-Documentation-With-Doxygen

## Doxygen - Documentation Setup
> Skip this section if you already have doxygen configured 

* Create doxygen config file (Doxyfile). Run `doxygen -g`
* Configure `Doxyfile`
    * Set `RECURSIVE` to true
    * Set Exclude Path and Exclude patterns to exclude directories you don't want documented. Typically library code and plugins come here. 
* Optionally add `html` and `latex` to `.gitignore` file
* Document your code according to Doxygen guidlines
    * Check `src/main.c` for C style documentation. Output can be seen [here](https://satu0king.github.io/Github-Documentation-With-Doxygen/main_8c.html).
    * Check `src/main.cpp` for C++ style documentation. Output can be seen [here](https://satu0king.github.io/Github-Documentation-With-Doxygen/main_8cpp.html)
    * Check `src/main.py` for Python style documentation. Output can be seen [here](https://satu0king.github.io/Github-Documentation-With-Doxygen/namespacemain.html)
* Optionally run `doxygen` to generate documentation to see output documentation locally
    * By default web documentation and pdf documentation files are generated in `html` and `latex` directories respectively.
    * View web documenation at `html/index.html`
    * Compile pdf documentation by running `make` in `latex` directory
    * Class list can be seen [here](https://satu0king.github.io/Github-Documentation-With-Doxygen/annotated.html)

## Configuring automatic publishing using github actions
* Copy the action file `main.yml` to `.github/workflows/main.yml`
* Commit and Push to github
* Github action should automatically start running
* Confirm that github is set to deploy `gh-pages` branch in settings page

## Notes
* Ensure that `publish_dir` in `main.yml` is set correctly

* TEST