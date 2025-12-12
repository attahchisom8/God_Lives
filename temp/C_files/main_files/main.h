#ifndef __MAIN__
#define __MAIN__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/* CHARACTER OPERATIONS */
bool is_digit(char c);
bool is_lower(char c);
bool is_upper(char c);
bool is_alphabet(char c);
int to_digit(char c);
char to_char(int n);
char to_lower(char c);
char to_upper(char c);


/*STRING OPERATION */
size_t _strlen(const char *s);
size_t _strnlen(const char *s, size_t maxlen);
char *rev_str(char *s);
char *_strcpy(char *dest, const char *src);
char *_strncpy(char *dest, const char *src, size_t dsize);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t ssize);
void *_memset(void *ptr, int c, size_t n);
void print_fizzbuzz(int n);
long long _atoi(const char *str);
char *extract_digits(const char *str);
size_t digits_len(const char *);
long long sum_large_nums_with_atoi(char *, char *);
long long sum_large_nums_without_atoi(char *, char *);
char *sum_large_nums_as_str(char *, char *);
char *_strchr(const char *s, int c);
char *_strrchr(const char *s, int c);
char *_strchrnul(const char *s, int c);
char *_strpbrk(const char *s, const char *accept);
void *_memchr(const void *s, int c, size_t n);
char *_strstr1(const char *heystack, const char *needle);
char *_strstr2(const char *heystack, const char *needle);
size_t _strspn(const char *s, const char *accept);
size_t _strcspn(const char *s, const char *reject);
char *_strtok(char *str, const char *delim);
char *_strtok2(char *str, const char *delim);
int _strcmp(const char *s1, const char *s2);
int _strcasecmp(const char *s1, const char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);
int _strncasecmp(const char *s1, const char *s2, size_t n);
char *_strsep(char **stringp, const char *delim);


/* MATHEMATUCAL OPERATIONS */
long long _pow(int, int);
void multiplication_table(int row, int col);
void multiplication_table2(int row, int col);
char *_strdup(const char *);

#endif
