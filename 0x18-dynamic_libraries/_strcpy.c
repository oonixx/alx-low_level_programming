#include "main.h"

/**
 *  * _strcpy - This function copies the str pointed to src and dest
 *   * @dest: The poiter parameter
 *    * @src: The poiter parameter
 *      * Return: The character
 *       */

char *_strcpy(char *dest, char *src)
{
		int index;

			for (index = 0; *(src + index) != '\0'; index++)
					{
								dest[index] = *(src + index);
									}
				dest[index] = '\0';

					return (dest);
}
