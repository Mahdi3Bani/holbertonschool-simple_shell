#ifndef SHELL_H
#define SHELL_H

extern char **env;
#define _POSIX_C_SOURCE 200809L

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

void clear(char **arguments);
char *parse(char **argument);
char *_path(char *f);
void _error(int l, char **argument, char *str);
char *find_path(void);
char *read_cmd(void);
char *itoa(unsigned int l);
char **stock(char *buff, char *delimiters);
unsigned int count(char *str, const char c);

#endif
