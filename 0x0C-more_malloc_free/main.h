#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int ch_count(char *cha);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *string_nconcat2(char *ch, char *s1, char *s2, unsigned int size, unsigned int n);

#endif /* MAIN_H */
