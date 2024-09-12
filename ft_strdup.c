#include "libft.h"
/*
A.K == strcpy(malloc)
Parameters
s1: The prefix string.
s2: The suffix string.

Return value
The new string.
NULL if the allocation fails.

External functs. malloc

Description
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/

char    *ft_strdup(const char *str)
{
    size_t i;
    char *arr;

    i = ft_strlen(str);
    arr = malloc(sizeof(char) * (i + 1));
    if(!arr)
        return(NULL);
    i = 0;
    while (str[i])
    {
        arr[i] = ((char *)str)[i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}