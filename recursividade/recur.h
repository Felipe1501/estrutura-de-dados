#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
#define MAX 40

int getsimb(char *str, int tam, int *ppos);
int expr(char *str, int tam, int *ppos);
int termo(char *str, int tam, int *ppos);
int fator(char *str, int tam, int *ppos);