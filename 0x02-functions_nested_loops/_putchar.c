#include <unistd.h>
/**
 *putchar - write the character C to stdout
 *@C: the character to be printed
 *Return: on success 1.
 *on error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
