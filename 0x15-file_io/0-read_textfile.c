#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: number of letters printed, if fails return 0.
 */
int create_file(const char *filename, char *text_content)
{
	int n, m, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	n = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(n, text_content, len);

	if (n == -1 || m == -1)
		return (-1);

	close(n);

	return (1);
}
