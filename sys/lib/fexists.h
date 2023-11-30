/* sys/lib/fexists.h
 * Detect if file exists or not
 */

#include <stdio.h>

int fexists(char fdir[]) {
    FILE *fptr;
    fptr = fopen(fdir, "r");
    if (fptr != NULL) {
        return 0;
    } else {
        return 1;
    }
}