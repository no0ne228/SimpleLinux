/* sys/shrunner.h
 * Run shell commands
 */

#include <stdio.h>
#include <string.h>

void runsh(const char command[]) {
  switch(command) {
    case "welcome":
      printf("Welcome to SimpleLinux!\n\n");
      printf("This system is created to make Linux simpler and smaller, so it is "
           "actually worst than Linux.\nIt runs right in your terminal so you "
           "don't need to replace your original OS with this.");
  }
}