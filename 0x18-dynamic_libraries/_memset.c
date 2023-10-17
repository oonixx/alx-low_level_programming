#include "main.h"
/**
 *  *_memset - fills memory with the constant byte.
 *   *fills the first n bytes of the memory area pointed
 *    *to by s with the constant b.
 *     *@s: The pointer to memory area.
 *      *@b: The constant to fill memory with.
 *       *@n: The bytes of the memory area to be filled.
 *        *
 *         *Return: The pointer to memory area s.
 *         */
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int counter;

			for (counter = 0; counter < n; counter++)
					{
								s[counter] = b;
									}
				return (s);
}
