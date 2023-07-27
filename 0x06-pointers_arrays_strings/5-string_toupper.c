#include "main'h"
/**
 * string touper - change lowercase to uppercase
 * @s: analised string
 *
 * Return: always 0
 */
char *string_toupper(char *)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
