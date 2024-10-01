This is a template for my C++ projects.
It contains the boilerplate code for some useful programs, currently:
- CMake
- Docker containers (including integration with VSCode)
- Doctest
- Doxygen
- Git
- Github actions (i.e. continuous integration)

and a tiny program to be documented with Doxygen.

Surely there exist much better ways of configuring the programs, this is the best I can currently do.

# Prerequisites

[Visual Studio Code](https://code.visualstudio.com/), [Docker](https://www.docker.com/) and the VS Code Dev Containers [extension](vscode:extension/ms-vscode-remote.remote-containers) are required.

# Testing

1. To test that Docker works as expected, use
    ```
    docker run hello-world
    ```
2. After building the container inside VS Code, use
    ```
    cmake -S . -B build -DBUILD_TESTING=ON
    cmake --build build
    ```
    and one of
    ```
    build/exec
    ```
    and
    ```
    cd build
    make test
    ```
    to test the program or the tests, respectively.
3. To generate the documentation, use
    ```
    doxygen
    ```
    then open `html/index.html` in a browser.
4. To test the debugger, either
- launch "Build main and debug" from the designated section of VS Code, or
- open a test, then launch "Build this test and debug".

# Remarks

I chose Debian as a container instead of lighter distros due to familiarity.

I committed the `.clang-format` due to easiness of retrieval.

# Possible additions

- More continuous integration.
- Move `.clang-format` into a repository for dotfiles.
- Add functionalities (e.g. arrow keys actions) to the terminal inside the container.
