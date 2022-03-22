#include "main.h"

/**
 * *_strcpy - copy SRC to DEST
 * @dest: final string
 * @src: source string
 * return: char
 */

char *_strcpy(char *dest, char *src)
{
	while (src != '\0')
	{
		**dest++ = **src++;
	}
	*dest = '\0';
	return(dest);
}	
