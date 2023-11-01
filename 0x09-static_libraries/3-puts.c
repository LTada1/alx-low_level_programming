#include <stdio.h>
#include "main.h"
#include <string.h>

void _puts(char *s)
{
	while (*s != '\0')
		_putchar(*s);
		s++;
	_putchar('\n');
}
