#include <stdio.h>
#include "main.h"

/*
 * void more_numbers - function print 10 times numbers between 0 to 14
 *
 * Return: numbers between 0 to 14 * 10 times
 *
 */

void more_numbers(void)
{

  int x, y;
  for (x=1; x <= 10; x++)
    {
      for (y=0; y<= 14; y++)
	{
	  if (y > 9)
	    {
	      _putchar( ( y / 10) + '0'); 
	    }
	  _putchar((y % 10) +  '0');
	}
      _putchar('\n');
      
    }  
}
