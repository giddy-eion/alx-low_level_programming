#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

int _putchar(char c);
void *_memset(void *s, int b, unsigned int n);
void *_memcpy(void *dest, void *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /*MAIN_H*/
