/* sys/term_loop.h
 * This file is used to enter terminal loop
 */

#include "lib/input.h"
#include <stdio.h>
#include "../usr/term/data.h"

void term_loop() {
  printf("%s", input(userTerm_prompt, 10));
}