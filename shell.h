#ifndef SHELL_H
#define SHELL_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <signal.h>

int read_line(int argc, char **argv);

#endif
