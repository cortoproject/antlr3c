# /corto/parser

Antlr3-based parser for Corto

## Requirements

Install Java, e.g.

```
sudo apt-get install default-jre
```

## Installation

This project has a dependency on antlr3 C runtime files for development and running, and antlr3 for development of the grammar.

Note: the following files have already been included in the repo; you don't need to download them, but instructions are kept for the record.

0. Download the `antlr-3.4-complete-no-antlrv2.jar` [here](http://www.antlr3.org/download/).
0. Then download the C runtime files, `libantlr3c-3.4.tar.gz` [here](http://www.antlr3.org/download/C/).

Then you need to build the C runtime for your computer as directed in [this guide](http://www.antlr3.org/api/C/build.html). In a nutshell, you have to run:

0. `./configure`
0. `make`
0. `sudo make install`

In my Ubuntu 14.04 64-bit VM I had to include the `--enable-64bit` flag to `configure`, so that is: `./configure --enable-64bit`


## Usage

The project's root directory has a grammar file (`Cortolang.g`), and a rakefile. This rakefile supports the commands:

- `build` to generate the lexer and parser files into `parser/src`.
- `clean` to remove the generated files.

Inside this directory there is the `parser` package. This is a Corto package and supports the normal `default`, `clean`, `clobber`, etc., commands.
