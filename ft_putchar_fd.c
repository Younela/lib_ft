#include "libft.h"
/*
	Description : Outputs the character ’c’ to the given file descriptor.

	c:  The character to output.
	fd:  The file descriptor on which to write.
*/

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c,1);
}