#include "main.h"
/**
 *  * _strlen - Function counting the length of string
 *   * @s: The pointer for counting the strting lenth
 *     * Return: int index
 *     */
int _strlen(char *s)
{
		int index = 0;

			while (s[index] != '\0')
						index++;

				return (index);
}
