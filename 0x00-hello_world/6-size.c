#include <stdio.h>
/**
 * main - function
 *
 * Return: 0 on success
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("size of char: %lu 1 byte(s)", sizeof(a));
printf("size of int: %lu 4 byte(s)", sizeof(b));
printf("Size of a long int: %lu 4 byte(s)", sizeof(c));
printf("Size of a long long int: %lu 8 byte(s)", sizeof(d));
printf("Size of a float: %lu 4 byte(s)" sizeof(e));
return (0);
}
