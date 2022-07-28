#ifndef SHELL_H
#define SHELL_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include<string.h>
#include<unistd.h>
void print_prompt1(void);
void print_prompt2(void);

char *read_cmd(void);

#endif
