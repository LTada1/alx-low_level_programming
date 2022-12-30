#include <stdio.h>

/**
 * main - prints a list of double didgits
 *
 * Description: digits should not be repeated twice
 * Return: Always(0) Success
*/

int main()
{
    char lu;
    char l;
    for (lu=48; lu<57; lu++)
     {
        for (l=48; l<57; l++)
        {
        if (lu==l)
        {
            continue;
        }
        putchar(lu);
        putchar(l);
        putchar(44);
        putchar(32);
        }
     }
        return(0);
}
