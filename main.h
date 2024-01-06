#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
int put_nour(char *str);
int nourstrlen(char *s);
size_t nourstrcspn(char *s, char *reject);
char **nourtoken(char *userLine);
void nourprintenv(char **env);
char *nourstrchr(char *s, int c);
void nourexecute(char **args);
char *nourstrdup(char *s);
char *getpath(char *command);
char *nourstrcat(char *s1, const char *s2);
char *nourstrcpy(char *dest, char *src);
int nourstrcmp(char *s1, char *s2);
int checkbuf(char *buff);
#endif
