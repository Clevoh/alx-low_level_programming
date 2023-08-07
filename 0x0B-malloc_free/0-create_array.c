#include <stdlib.h>
/**
 * create_array - create array of size size and assign char
 *
 * @size: size of the array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: Pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c);
{
	char *str;
	unsigned int i;

	str - malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[1] - c;
	return (str);
}
