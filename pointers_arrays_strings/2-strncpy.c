#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int compte;
	
	for (compte = 0; compte < n && src[compte] != '\0'; compte++)
		dest [compte] = src[compte];

	for ( ; compte < n; compte++)
		dest[compte] = '\0';

	return (dest);
}
