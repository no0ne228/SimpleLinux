/* sys/lib/futil.h
 * Header that contains useful functions for manipulating files
 */

#include <stdio.h>

int fexists(char FileDir[]) {
  FILE *fptr;
  fptr = fopen(FileDir, "r");
  if (fptr != NULL) {
    fclose(fptr);
    return 0;
  } else {
    fclose(fptr);
    return 1;
  }
}