#ifndef _STRING_H
#define _STRING_H 1

#include <sys/cdefs.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

int memcmp(const void*, const void*, size_t);
void* memcpy(void* __restrict, const void* __restrict, size_t);
void* memmove(void*, const void*, size_t);
void* memset(void*, int, size_t);
size_t strlen(const char*);
int strcmp(const char* s1, const char* s2);
char *strcpy(char *s1, const char *s2);
int strncmp(const char* s1, const char* s2, size_t len);
char *strcat(char *s1, const char *s2);
char *strchr(const char *s, int c);
char* strncpy(char* dst, const char* src, size_t n);
size_t strspn(const char *s1, const char *s2);
char *strtok(char *s1, const char *s2);
size_t strcspn(const char *s1, const char *s2);

#ifdef __cplusplus
}
#endif

#endif
