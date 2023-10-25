#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * followed by a new line.
 * @size: size of the triangle
 * if size is 0 or less print a new line.
 * # used to print the triangle
 * Return: empty
 */
void print_triangle(int size)
{
int x, y, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = size - x; y > 1; y--)
{
_putchar(32);
}
for (z = 0; z <= x; z++)
{
_putchar(35);
}
_putchar('\n');
}
}
}

