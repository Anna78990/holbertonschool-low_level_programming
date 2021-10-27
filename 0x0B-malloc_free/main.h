#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int count(char *cha);
char *str_concat(char *s1, char *s2);
int ch_count(char *cha);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
