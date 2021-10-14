#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
* char *leet - t encodes a string into 1337
* @c: string
* Return: (c)
*/

char *leet(char *c)
{
	char *str;
	char *mst;
	char *num;
	int len;
	int size;
	int i;

	str = "aeotl";
	mst = "AEOTL";
	num = "43071";
	len = strlen(c);
	for (i = 0; i < len; i++)
	{
		for (size = 0; size <= 4; size++)
		{
			if (c[i] == str[size] || c[i] == mst[size])
			{
				c[i] = num[size];
			}
		}
	}
	return (c);
}
