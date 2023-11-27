/* usr/bin/sh.h
 * Run shell commands
 */

#include <stdio.h>
#include <string.h>

void sh_run(const char command[]) {
  if (strcmp(command, "welcome") == 0) {
    printf("Welcome to SimpleLinux!\n\n");
    printf("This system is created to make Linux simpler and smaller, so it is "
           "actually worst than Linux.\nIt runs right in your terminal so you "
           "don't need to replace your original OS with this.\n");
  }
}