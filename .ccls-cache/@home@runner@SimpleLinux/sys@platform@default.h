/* sys/platform/default.h
 * This file is used to initialize system for unknown terminal
 */

#include "../version.h"
#include <stdio.h>

void platform_init() { version_print(); }