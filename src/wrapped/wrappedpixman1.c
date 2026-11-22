// SPDX-License-Identifier: MIT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"

const char* pixman1Name = "libpixman-1.so.0";
#define ALTNAME "libpixman-1.so"
#define LIBNAME pixman1

#include "wrappedlib_init.h"
