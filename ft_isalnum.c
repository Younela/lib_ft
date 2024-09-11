// checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
#include "libft.h"

int isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}