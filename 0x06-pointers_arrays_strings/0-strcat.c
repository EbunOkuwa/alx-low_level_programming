#include "main.h"

/**
 * _strcat - Concentrates two strings,
 *
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 *
 */
char 8_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >
