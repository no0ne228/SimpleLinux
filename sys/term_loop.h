/* sys/term_loop.h
 * This file is used to enter terminal loop
 */

#include "../usr/term/data.h"
#include "lib/input.h"
#include <stdio.h>
#include "../usr/bin/sh.h"

void term_loop() {
  sh_run(input(userTerm_prompt, 100));
  term_loop();
}