<<<<<<< HEAD
/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}
=======
#include "main.h"
/**
 * _isupper - prints uppercase characters
 * @c: If c is uppercase
 * Return: 1 if c is uppercase
 * 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}

>>>>>>> eed32a3d1f8c117b875897778511ade2b89d769e
