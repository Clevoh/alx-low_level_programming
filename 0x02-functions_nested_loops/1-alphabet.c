#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
init i;

for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
