#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
int i = 2048 >> 1;
printf("%d\n", 2048 >> 20);
printf("%d\n", i << 1);
printf("%d\n", 10 & 3);
printf("%d\n", 10 & 4);
printf("%d\n", 10 & 10);
return (0);
}
