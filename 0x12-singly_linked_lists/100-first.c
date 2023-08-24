#include <stdio.h>

/**
 * be_main - executes the function before main
 * Return: no return.
 */

void __attribute__ ((constructor)) be_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
