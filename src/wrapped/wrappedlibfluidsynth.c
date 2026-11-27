// SPDX-License-Identifier: MIT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE
#include <dlfcn.h>

#include "wrappedlibs.h"
#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"
#include "emu/x64emu_private.h"
#include "myalign.h"

const char* libfluidsynthName = "libfluidsynth.so.3";
#define ALTNAME "libfluidsynth.so"
#define LIBNAME libfluidsynth

#include "generated/wrappedlibfluidsynthtypes.h"
#include "wrappedlib_init.h"
