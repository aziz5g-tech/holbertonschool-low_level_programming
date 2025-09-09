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
  if (*s == '\0')
    {
      return n;
    }

  s++;
  return (_strlen_recursion(s) + 1);
}
