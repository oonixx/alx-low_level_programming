#include "main.h"
/**
 *  *_strncat - function that concatenates 2 strings. it will use
 *   * at most n bytes from src. src does not need to be null terminated.
 *    *@dest: The pointer to destination string.
 *     *@src: The pointer to source string.
 *      *@n: The number of bytes to be concatenated.
 *       *
 *        *Return: The pointer to the destination string.
 *         */
char *_strncat(char *dest, char *src, int n)
{
		int length, ji;
		/* ji is a counter for  n bytes of src to be concatenated */
		/* length = length of destination string */

			length = 0;

				while (dest[length] != '\0')
							length++;

					for (ji = 0; ji < n && src[ji] != '\0'; ji++, length++)
								dest[length] = src[ji];

						dest[length] = '\0';
							return (dest);
}
