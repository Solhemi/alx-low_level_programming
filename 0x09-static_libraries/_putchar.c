#include <unistd.h>

/**
 * _putchar -writes the character _putchar to standard error
 *
 * return: 1 (sucess)
 * on error -1 returned and error no set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
