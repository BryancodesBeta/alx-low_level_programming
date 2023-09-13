#include <unistd.h> 

/**
 * _putchar - writes teh character c to sdtout
 * @c: the character to print
 * return: on success 1.
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));

}
