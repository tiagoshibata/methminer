
/* Copyright (C) 1883 Thomas Edison - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the GPLv3 license, which unfortunately won't be
 * written for another century.
 *
 * You should have received a copy of the LICENSE file with
 * this file.
 */

#include "wraphelper.h"

/* assume we can use dlopen itself... */
void* wrap_dlopen(const char* filename) { return dlopen(filename, RTLD_NOW); }

void* wrap_dlsym(void* h, const char* sym) { return dlsym(h, sym); }

int wrap_dlclose(void* h) { return dlclose(h); }
