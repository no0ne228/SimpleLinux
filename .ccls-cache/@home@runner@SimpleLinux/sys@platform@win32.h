/* sys/platform/win32.h
 * This file is used to initialize system for Windows terminal
 */

#include <stdio.h>
#include "../version.h"

void platform_init() {
  printf("%s (Windows)", version_full);
}