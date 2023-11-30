/*main.c*/

/*#pragma GCC diagnostic ignored "-Wunused-result"*/

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
#include "sys/util/checkcmds.h"

int main() {
  checkcmds();
  #ifdef _WIN32
  system("cls");
  #elif __APPLE__
  printf("\033c");
  #elif __linux__
  printf("\033c");
  #endif

  platform_init();
  term_loop();
  return 0;
}