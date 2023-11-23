/*main.c*/

#ifdef _WIN32
#include "sys/platform/win32.h"
#elif __APPLE__
#include "sys/platform/linux.h"
#elif __linux__
#include "sys/platform/linux.h"
#else
#include "sys/platform/default.h"
#endif

#include <stdio.h>
#include "sys/data/VERSION.h"

int main() {
  printf("%s v.%s", VERSION_NAME, VERSION_SHORTVER);
  platform_init();
  return 0;
}