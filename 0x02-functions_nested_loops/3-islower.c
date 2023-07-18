#include "main.h"
/**
 * _islower - shows 1 if the input is a
 * lowercase character. Another cases, shows.
 * @
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
_putchar('\n');
