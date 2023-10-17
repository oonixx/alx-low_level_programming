#include "main.h"
/**
 *  * _islower - checks if the character is lowercase if it YES returns 1
 *   * otherwise returns 0 just like islower() function in ctype.h
 *    * @c: The int value to be compared with the ASCII value
 *      * Return: 0 in successful.
 *       */
int _islower(int c)
{
		if (c >= 97 && c <= 122)
					return (1);
			else
						return (0);

}
