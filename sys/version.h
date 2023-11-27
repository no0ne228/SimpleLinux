/* sys/version.h */

#include <stdio.h>

const char version_full[31] = "SimpleLinux v.0.01 Preview\n\n";

void version_print() { printf("%s", version_full); }