/* usr/bin_src/reboot.c
 * reboot command for shell
 */

#ifdef _WIN32
#include <stdlib.h>
#include "../../sys/platform/win32.h"
#elif __APPLE_
#include <stdio.h>
#include "../../sys/platform/linux.h"
#elif __linux__
#include <stdio.h>
#include "../../sys/platform/win32.h"
#else
#include <stdio.h>
#include "../../sys/platform/default.h"
#endif
#include "../../sys/util/checkcmds.h"

int main() {
  #ifdef _WIN32
  system("cls");
  #elif __APPLE__
  printf("\033c");
  #elif __linux__
  printf("\033c");
  #endif
  
  checkcmds();
  #ifdef _WIN32
  system("cls");
  #elif __APPLE__
  printf("\033c");
  #elif __linux__
  printf("\033c");
  #endif
  
  platform_init();
  return 0;
}