// checks for any printable character including space
#include "libft.h"

int ft_isprint(int c)
{
    if(c >= 31 && c <= 126)
        return (1);
    return (0);
}