#include <stdio.h>
/**
 * main - Entry point
 * putchar: Print Character one at a time
 * Return: Always 0 Success
 */
  
int main(void)
{
          char abc;
	  char ABC;

	  abc = 'a';
	  ABC = 'A';
	  while (ABC <= 'Z')
          {
		  if (abc != 'z')
			  while (abc <= 'z')
			  {
				  putchar(abc);
				  abc++;
			  }
		  putchar(ABC);
		  ABC++;
          }
          putchar('\n');
 
          return (0);
}
