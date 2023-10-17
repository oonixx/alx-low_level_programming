#include "main.h"
#define NULL 0

/**
 * * _strpbrk - return a pointer to the byte in s that matches the byte in accept
 * * @s: The string to search
 * * @accept: The target matches
 * * Return: The pointer to index of str at first occurence
 * */

char *_strpbrk(char *s, char *accept)
{
		int xx = 0, yy;

			while (s[xx] != '\0')
					{
								for (yy = 0; accept[yy] != '\0'; yy++)
											{
															if (s[xx] == accept[yy])
																			{
																								s = &s[xx];
																												return (s);
																															}

																	}

									xx++;
										}

				return (NULL);

}
