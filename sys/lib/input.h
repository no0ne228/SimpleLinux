/* sys/lib/input.h
 * This library simplifies input
 */

#include <stdio.h>
#include <stdlib.h>

char *input(const char InputText[], int InputSize) {
  char *result = (char *)malloc(InputSize * sizeof(char));
  if (result != NULL) {
    printf("%s", InputText);
    scanf("%s", result);
    return result;
  } else {
    printf("Error at %p: getting input failed", (void *)&result);
  }
}