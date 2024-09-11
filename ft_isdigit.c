//checks for a digit (0 through 9)

#include "libft.h"

int ft_isdigit(int c)
{
    if(c >= 48 && c <= 57)
        return (1);
    return (0);
}