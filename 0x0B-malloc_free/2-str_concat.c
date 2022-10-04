#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @1: first string
 * @2: secound string
 *
 * Return: Null incase of success
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	imt index, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	concat_str = malloc(sizeof(char) * len);
	if (concat_str == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];
	return (concat_str);
}
