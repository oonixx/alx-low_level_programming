#include "main.h"
/**
 *  * _atoi - This function converts a string to an int.
 *   * @s: The Pointer parameter
 *    * Return: Integer value
 *     */
int _atoi(char *s)
{
		unsigned int count = 0, size = 0, ji = 0, ki = 1, mi = 1, index;

			while (*(s + count) != '\0')
					{
								if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
												break;

										if (*(s + count) == '-')
														ki *= -1;

												if ((*(s + count) >= '0') && (*(s + count) <= '9'))
															{
																			if (size > 0)
																								mi *= 10;
																						size++;
																								}
														count++;
															}

				for (index = count - size; index < count; index++)
						{
									ji = ji + ((*(s + index) - 48) * mi);
											mi /= 10;
												}
					return (ji * ki);
}
