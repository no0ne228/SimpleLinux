/* sys/version.h */

#include <stdio.h>

const char version_full[31] = "SimpleLinux v.0.02.4 Alpha";

void version_print() { printf("%s\n\n", version_full); }