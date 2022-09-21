#include "main.h"
#include "stdio.h"

/**
 * _strcat - function to concatenate
 * @dest: param1
 * @src: param2
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
    int len = 0, i;

    while (dest[len])
        len++;
    for (i = 0; src[i] != 0; i++)
    {
        dest[len] = src[i];
        len += 1;
    }
    dest[len] = '\0';
    return (dest);
}
