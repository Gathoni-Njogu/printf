#include "main.h"
#include <stdlib.h>

/**
 * print_point - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_point(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hexa_extra(x);
	return (y + 2);
}
