#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - This function is to find if the number is positive or negative.
* Return: 0
*/
void positive_or_negative(int i)
		{
	 	if (i > 0)
		{
		printf("%d is positive\n", i);
 		}
		else if (i == 0)
		{
		printf("%d is zero\n", i);
		}
		else
		{
			printf("%d is negative\n", i);
		};
}
