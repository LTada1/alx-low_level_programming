#include <stdio.h>
 
/**
 * main - Entry point
 * putchar: Print Character one at a time
 * Return: Always 0 Success
 */
 
int main(void)
{
          char abc;
 
          abc = 'a';
 
          while (abc <= 'z')
	  {
		  if (abc != 'e' || abc == 'q')
		  putchar(abc);
                  abc++;
          }
          putchar('\n');
 
          return (0);
}
