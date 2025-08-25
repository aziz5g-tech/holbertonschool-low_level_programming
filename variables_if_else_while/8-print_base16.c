#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all the numbers of base 16  with a for loop
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, m;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (m = 'a'; m <= 'f'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
