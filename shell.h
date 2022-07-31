#ifndef SHELL_H
#define SHELL_H


extern char **environ;

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stddef.h>
#include <wait.h>
#include <stddef.h>
#include <errno.h>
#include <dirent.h>






typedef struct bltn
{
	char *s;
	int (*f)(char **av);

} bltn;

int _env(char **av);
int _cd(char **av);
int fexit(char **av);


char **strtow(const char *str, const char del);
void free_tow(char **tow);
size_t len_tow(char **av);
void print_tow(char **tow);



char *_getenv(const char *name);
char *_match(char **s);
int _path(char *s);
int _dir(char *file);

int run_av(char **av);
void execute_line(char *line);
void err_out(char *name, char *err);


void REPL(int input);


char **strtow(const char *str, const char del);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int exec_bltn(char **av);




#endif
