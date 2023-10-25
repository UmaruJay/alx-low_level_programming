#include <unistd.h>

/**
<<<<<<< HEAD
 * _putchar - writes a character to standard output
 * @c: The character to be written
 *
 * Return: On success, 1 is returned. On error, -1 is returned,
 *         and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> eed32a3d1f8c117b875897778511ade2b89d769e
}
