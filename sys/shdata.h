#include <stdio.h>

char shdata_current_get() {
  FILE *fptr;
  fptr = fopen("sys/data/shdata_current", "r");
  if (fptr != NULL) {
    char sh[11];
    fgets(sh, 11, fptr);
    return sh;
  }
}