#include "main.h"
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(8);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    printf("int max = %d\n", INT_MAX);
    printf("int min = %d\n", INT_MIN);
    print_number(INT_MAX);
    _putchar('\n');
    return (0);
}
