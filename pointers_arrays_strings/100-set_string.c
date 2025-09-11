#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to pointer to char
 * @to: Pointer to char to assign
 */
void set_string(char **s, char *to)
{
	*s = to;
}
