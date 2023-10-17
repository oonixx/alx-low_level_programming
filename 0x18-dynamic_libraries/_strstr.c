#include "main.h"
#define NULL 0

/**
 * * _strstr - locate and return pointer to the first occurence of substring
 * * @haystack: The string to search
 * * @needle: The target substring to search for
 * * Return: The pointer to index of string at first occurence of whole substring
 * */
char *_strstr(char *haystack, char *needle)
{
    int index = 0, ji, xx;

    if (needle[0] == '\0')
        return (haystack);

    while (haystack[index] != '\0') 
    {
        if (haystack[index] == needle[0])
        {
            xx = index, ji = 0;

            while (needle[ji] != '\0')
            {
                if (haystack[xx] == needle[ji])
                    xx++, ji++;
                else
                    break;
            } 

            if (needle[ji] == '\0')
            {
                return (haystack + index);
            }
        }

        index++;
    }

    return (NULL); 
}
