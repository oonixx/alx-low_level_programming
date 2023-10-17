#include <unistd.h>
#include "main.h"
/**
 *  * _putchar - prints out the character in the stdout
 *   * @c: The character to be printed
 *    * Return: Integer 
 *     */
int  _putchar(char c)
{
		write(1, &c, 1);

			return (0);
}
