#include "main.h"

/**
 *
 * _strlen_recursion - function that returns the length of a string
 * @*s: a string to count
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
  int n = 0;
  
  if (*s == '\0')
    {
      return n;
    }

  n++;
  _strlen_recursion(s);
}
