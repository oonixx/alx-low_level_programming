#include "main.h"
/**
 * * _strspn - return the length of str that matches values consistently
 * * @s: The string to search
 * * @accept: The target matches
 * * Return: The number of bytes consecutively matched
 * */

unsigned int _strspn(char *s, char *accept)
{
    int index = 0, ji;
    int matches = 0;

    while (s[index] != '\0') 
    {
        for (ji = 0; accept[ji] != '\0'; ji++) 
        {
            if (s[index] == accept[ji]) 
            {
                matches++;
                break;
            }

            if (accept[ji + 1] == '\0' && s[index] != accept[ji])
                return (matches); 
        }

        index++;
    }

    return (matches);
}
