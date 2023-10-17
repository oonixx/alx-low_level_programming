#include "main.h"
#define NULL 0

/**
 * * _strchr - locate 1st occurrence of character in str and returns pointer there
 * * @s: The str to search
 * * @c: The target char
 * * Return: The pointer to that char in the str
 * */

char *_strchr(char *s, char c)
{
		int index = 0;

			while (s[index] != '\0' && s[index] != c)
						index++;

				if (s[index] == c)
							return (&s[index]);

					else
								return (NULL);
}
