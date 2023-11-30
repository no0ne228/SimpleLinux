/* usr/bin/sh.h
 * Run shell commands
 */

#include <stdio.h>
#include "../sys/lib/fexists.h"
#include <stdlib.h>
#include <string.h>

void sh_run(char command[], char args[]) {
  int bin_exists;
  int status;
  #ifdef _WIN32
  char bin_dir[30] = "usr\\bin\\";
  #else
  char bin_dir[30] = "./usr/bin/";
  #endif
  strcat(bin_dir, command);
  #ifdef _WIN32
  strcat(bin_dir, ".exe");
  #elif __APPLE__
  strcat(bin_dir, ".app");
  #elif __linux__
  strcat(bin_dir, ".out");
  #endif
  bin_exists = fexists(bin_dir);
  if (!(strcmp(args, "=$NULL"))) {
    strcat(bin_dir, " ");
    strcat(bin_dir, args);
  }
  if (bin_exists == 0) {
    status = system(bin_dir);
  } else {
    #ifdef _WIN32
    printf("");
    #elif __APPLE__
    printf("\033[91m");
    #elif __linux__
    printf("\033[91m");
    #endif
    printf("%s: command not found\033[0m\n", command);
  }
}
/* This is old shell

if (strcmp(command, "welcome") == 0) {
    printf("Welcome to SimpleLinux!\n\n");
    printf("This system is created to make Linux simpler and smaller, so it is actually worst than Linux.\nIt runs right in your terminal so you don't need to replace your original OS with this.\n");
    printf("Type 'help' to see avaliable commands\n");
  } else if (strcmp(command, "help") == 0) {
    printf("clear - clears the terminal\n");
    printf("welcome - print welcome text\n");
  } else if (strcmp(command, "clear") == 0) {
    #ifdef _WIN32
    system("cls");
    #elif __APPLE__
    printf("\033c");
    #elif __linux__
    printf("\033c");
    #endif
  } else {
    #ifdef __linux__
    printf("\033[91m");
    #elif __APPLE__
    printf("\033[91m");
    #endif
    printf("%s: command not found\n", command);
    #ifdef __linux__
    printf("\033[0m");
    #elif __APPLE__
    printf("\033[0m");
    #endif
  }
*/