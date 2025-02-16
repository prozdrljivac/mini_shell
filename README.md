# Mini Shell

## Overview

Mini Shell is a simple shell implementation in C that supports basic command execution.
This project is designed to demonstrate fundamental concepts such as process management,
command parsing, and system calls.

## Features

- Executes basic shell commands (e.g., `ls`, `pwd`, `echo`, `date`, `cat`)
- Supports built-in commands like `exit` and `cd`
- Implements a simple Read-Eval-Print Loop (REPL)
- Handles input parsing and command execution using system calls

## Installation

Clone the repository and build the project using `make`:

```sh
git clone <repository_url>
cd mini_shell
make
```

## Usage

Run the shell using:

```sh
make run
```

Then, type commands as you would in a standard shell.

## Cleanup

To remove compiled files, use:

```sh
make clean
```

## Configuration

- The maximum command input size is set to **256** characters for efficiency.
- The shell allows up to **10 arguments per command** (11 slots total including `NULL` terminator).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
