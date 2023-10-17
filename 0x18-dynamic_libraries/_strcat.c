#include "main.h"
/**
 *  *_strcat - function that concatenates 2 strings.
 *   *@dest: The pointer to destination string.
 *    *@src: The pointer to source string.
 *     *
 *      *Return: The pointer to destination string.
 *       */
char *_strcat(char *dest, char *src)
{
		int length, ji; 

			length = 0;
				while (dest[length] != '\0')
							length++;

					for (ji = 0; src[ji] != '\0'; ji++, length++)
								dest[length] = src[ji];

						dest[length] = '\0';
							return (dest);
}
