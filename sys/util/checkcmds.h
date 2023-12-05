/* sys/util/checkcmds.h
 * Utility for checking commands
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char Commands[3][10] = {"welcome", "help", "reboot"};

void checkcmds() {
  printf("Checking commands...\n");

  for (int i = 0; i <= 3 - 1; i += 1) {
    printf("Compiling %s.c...", Commands[i]);
    char cc[100] = "gcc -o ./usr/bin/";
    strcat(cc, Commands[i]);
    #ifdef _WIN32
    strcat(cc, ".exe ");
    #elif __APPLE__
    strcat(cc, ".app ");
    #elif __linux__
    strcat(cc, ".out ");
    #endif
    strcat(cc, "./usr/bin_src/");
    strcat(cc, Commands[i]);
    strcat(cc, ".c");
    int status = system(cc);
    if (status == 0) {
      printf("done\n");
    } else if (status == 1) {
      printf("failed\n");
    } else {
      printf("failed (%d)\n", status);
    }
  }
}