#include "main.h"

char *_strcat(char *dest, char *src)
{
	int len;
	int j;

	len = 0;

	while (dest[len] != '0')
	{
		len++;
	}

	for(j = 0; src[j] != 0; j++, len++)
	{
		dest[len] = src[j];
	}
	return (dest);
}
