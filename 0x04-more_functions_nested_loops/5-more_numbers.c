#include "main.h"
/**
 * more_numbers - checks for lowercase character
 * Return: Always absolute
 */

void more_numbers(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j);
			if (j == 57)
			{
				int i, j;

				for (i = 49; i <= 52; i++)
				{
					for (j = 48; j <= 52; j++)
					{
						_putchar(i);
						_putchar(j);
					}
					if (i == 49)
						break;
				}
			}
		}
		_putchar('\n');
	}
}
