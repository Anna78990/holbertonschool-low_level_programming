#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
printf("%d\n", 1 >> 20);
printf("%d\n", 19 >> 0);
printf("%d\n", 10 & 3);
printf("%d\n", 10 & 4);
printf("%d\n", 10 & 10);
return (0);
}
