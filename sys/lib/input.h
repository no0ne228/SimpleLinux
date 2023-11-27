/* sys/lib/input.h
 * This library simplifies input
 */

#include <stdio.h>
#include <stdlib.h>

char* input(const char InputText[], const int InputSize) {
  char *result = (char *)malloc(InputSize * sizeof(char));
  int status;
  if (result != NULL) {
    printf("%s", InputText);
    status = scanf("%s", result);
    return result;
  } else {
    printf("Error at %p: getting input failed (sys/lib/input.h)", (void *)&result);
    free(result);
  }
}