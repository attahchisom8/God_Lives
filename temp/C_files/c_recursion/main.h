#ifndef __RECURSION__
#define __RECURSION__


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



/* STRINGS */
size_t strlen_recursion(const char *s);
char *rev_str_recursion(char *s);
char *strstr_recursion(const char *heystack, const char *needle);
char *strchr_recursion(const char *s, int c);
char *strrchr_recursion(const char *s, int c);
size_t strspn_recursion(const char *s, const char *accept);
size_t strcspn_recursion(const char *s, const char *reject);
char *strpbrk_recursion(const char *s, const char *accept);
int strcmp_recursion(const char *s1, const char *s2);
char *strtok_recursion(char *str, const char *delim);
char *strsep_recursion(char **stringp, const char *delim);

#endif
