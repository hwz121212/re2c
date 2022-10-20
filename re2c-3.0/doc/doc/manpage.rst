++++
re2c
++++

======================================================
generate fast lexical analyzers for C/C++, Go and Rust
======================================================

:Manual section: 1

SYNOPSIS
========

RE2C_DISCLAIMER

.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/synopsis.rst_

Introduction
============

.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/syntax/intro.rst_

Here is an example of a small program that checks if a given string contains a
decimal number:

.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/01_basic.re
    :literal:
    :code: RE2C_LANG

In the output everything between ``/*!re2c`` and ``*/`` has been replaced with
the generated code:

.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/01_basic.RE2C_SOURCE_EXT
    :literal:
    :code: RE2C_LANG

Syntax
======

.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/syntax/syntax.rst_

Program interface
=================

.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/syntax/api1.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/syntax/api2_RE2C_LANG.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/syntax/api3.rst_

Options
=======

Some of the options have corresponding `configurations`_,
others are global and cannot be changed after re2c starts reading the input file.
Debug options generally require building re2c in debug configuration.
Internal options are useful for experimenting with the algorithms used in re2c.

.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/options/options.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/options/debug.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/options/internal.rst_

Warnings
========

Warnings can be invividually enabled, disabled and turned into an error.

.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/warnings/warnings_general.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/warnings/warnings_list.rst_

Blocks and directives
=====================
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/directives/directives.rst_

API primitives
==============
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/api/interface.rst_

Configurations
==============
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/configurations/configurations.rst_

Regular expressions
===================
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/regexps/regular_expressions.rst_

Handling the end of input
=========================
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/eof/eof.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/eof/01_sentinel.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/eof/01_sentinel.re
    :literal:
    :code: RE2C_LANG
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/eof/03_eof_rule.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/eof/03_eof_rule.re
    :literal:
    :code: RE2C_LANG
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/eof/02_bounds_checking.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/eof/02_bounds_checking.re
    :literal:
    :code: RE2C_LANG
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/eof/04_generic_api.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/eof/05_generic_api_eof_rule.re
    :literal:
    :code: RE2C_LANG

Buffer refilling
================
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/fill/fill.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/fill/01_fill.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/fill/01_fill.re
    :literal:
    :code: RE2C_LANG
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/fill/02_fill.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/fill/02_fill.re
    :literal:
    :code: RE2C_LANG

Multiple blocks
===============
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/conditions/blocks.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/conditions/parse_u32_blocks.re
    :literal:
    :code: RE2C_LANG

Start conditions
================
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/conditions/conditions.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/conditions/parse_u32_conditions.re
    :literal:
    :code: RE2C_LANG

Storable state
==============
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/state/state.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/state/push.re
    :literal:
    :code: RE2C_LANG

Reusable blocks
===============
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/reuse/reuse.rst_

Example of a ``!use`` directive
-------------------------------
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/reuse/usedir.re
    :literal:
    :code: RE2C_LANG

Example of a ``/*!use:re2c ... */`` block
-----------------------------------------
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/reuse/reuse.re
    :literal:
    :code: RE2C_LANG

Submatch extraction
===================
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/submatch/submatch.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/submatch/submatch_example_stags.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/submatch/01_stags.re
    :literal:
    :code: RE2C_LANG
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/submatch/submatch_example_stags_fill.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/submatch/01_stags_fill.re
    :literal:
    :code: RE2C_LANG
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/submatch/submatch_example_posix.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/submatch/03_posix.re
    :literal:
    :code: RE2C_LANG
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/submatch/submatch_example_mtags.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/submatch/02_mtags.re
    :literal:
    :code: RE2C_LANG

Encoding support
================
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/encodings/encodings.rst_
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/encodings/unicode_identifier.re
    :literal:
    :code: RE2C_LANG

Include files
=============
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/includes/includes.rst_

Include file 1 (definitions.RE2C_HEADER_EXT)
------------------------------------------
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/includes/definitions.RE2C_HEADER_EXT
    :literal:
    :code: RE2C_LANG

Include file 2 (extra_rules.re.inc)
-----------------------------------
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/includes/extra_rules.re.inc
    :literal:
    :code: RE2C_LANG

Input file
----------
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/includes/include.re
    :literal:
    :code: RE2C_LANG

Header files
============
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/headers/headers.rst_

Input file
----------
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/headers/header.re
    :literal:
    :code: RE2C_LANG

Header file
-----------
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/examples/RE2C_LANG/headers/lexer/state.RE2C_HEADER_EXT
    :literal:
    :code: RE2C_LANG

Skeleton programs
=================
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/skeleton/skeleton.rst_

Visualization and debug
=======================
.. include:: E:/hanwenzhi_code/re2c/backup/re2c-3.0/doc/manual/dot/dot.rst_

SEE ALSO
========
You can find more information about re2c at the official website: http://re2c.org.
Similar programs are flex(1), lex(1), quex(http://quex.sourceforge.net).

AUTHORS
=======
re2c was originaly written by Peter Bumbulis in 1993.
Since then it has been developed and maintained by multiple volunteers;
mots notably, Brain Young, Marcus Boerger, Dan Nuffer and Ulya Trofimovich.
