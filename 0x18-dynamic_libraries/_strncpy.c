#include "main.h"
/**
 *  *_strncpy - copies the string
 *   *@dest: The pointer to a char that will be changed
 *    *@src: The pointer to a char that will be changed
 *     *@n: The value
 *      *Return: The dest
 *       */

char *_strncpy(char *dest, char *src, int n)

{
	int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);

}
