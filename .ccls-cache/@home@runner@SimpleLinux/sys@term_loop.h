/* sys/term_loop.h
 * This file is used to enter terminal loop
 */

#include "../usr/term/data.h"
#include "lib/input.h"
#include <stdio.h>
#include "../usr/sh.h"
#include "lib/stringV2.h"

void term_loop() {
  for (;;) {
    char *inp[100];
    char args[100] = "=$NULL";
    input_ptr(userTerm_prompt, 100, inp);
    sh_run(*inp, args);
  }
}