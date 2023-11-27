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

#include "sys/term_loop.h"

int main() {
  printf("%s", version_full);
  platform_init();
  term_loop();
  return 0;
}