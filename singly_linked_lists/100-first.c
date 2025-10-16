#include <stdio.h>

void do_it_first(void) __attribute__ ((constructor));

/**
  * first - print You're beat! and yet, you must allow,\nI bore my house upon my back!\n
  *
  * Return: prints before main
  */
void do_it_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
