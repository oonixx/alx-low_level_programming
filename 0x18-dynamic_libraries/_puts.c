#include "main.h"
/**
 *  * _puts - prints the string to stdout
 *   * @str: The pointer parameter
 *     */

void _puts(char *str)
{
		int index = 0;

			while (str[index] != '\0')
					{
								_putchar(str[index]);
										index++;
											}

				_putchar('\n');
}
