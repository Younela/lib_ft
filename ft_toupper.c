//converts the letter c to upper case, if possible
#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
    return (c);
}