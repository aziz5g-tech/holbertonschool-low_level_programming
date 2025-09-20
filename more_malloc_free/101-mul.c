#include "main2.h"
#include <stdlib.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if string has only digits, 0 otherwise
 */
int is_digit(char *s)
{
    int i = 0;

    if (!s)
        return (0);

    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: length of string
 */
int _strlen(char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return (i);
}

/**
 * errors - prints Error and exits with status 98
 */
void errors(void)
{
    _putchar('E');
    _putchar('r');
    _putchar('r');
    _putchar('o');
    _putchar('r');
    _putchar('\n');
    exit(98);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number as string
 * @num2: second number as string
 */
void multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int len = len1 + len2;
    int *result, i, j, carry, digit1, digit2, started = 0;

    result = malloc(sizeof(int) * len);
    if (!result)
        exit(1);

    /* initialize result array to 0 */
    for (i = 0; i < len; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        digit1 = num1[i] - '0';
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            digit2 = num2[j] - '0';
            carry += result[i + j + 1] + (digit1 * digit2);
            result[i + j + 1] = carry % 10;
            carry /= 10;
        }
        result[i + j + 1] += carry;
    }

    /* print result */
    for (i = 0; i < len; i++)
    {
        if (result[i])
            started = 1;
        if (started)
            _putchar(result[i] + '0');
    }

    if (!started)
        _putchar('0');

    _putchar('\n');
    free(result);
}

/**
 * main - entry point, multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
        errors();

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
        errors();

    multiply(argv[1], argv[2]);

    return (0);
}
