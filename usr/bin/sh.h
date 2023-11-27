/* usr/bin/sh.h
 * Run shell commands
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sh_run(const char command[]) {
  if (strcmp(command, "welcome") == 0) {
    printf("Welcome to SimpleLinux!\n\n");
    printf("This system is created to make Linux simpler and smaller, so it is actually worst than Linux.\nIt runs right in your terminal so you don't need to replace your original OS with this.\n");
    printf("Type 'help' to see avaliable commands");
  } else if (strcmp(command, "help") == 0) {
    printf("clear - clears the terminal\n");
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
}