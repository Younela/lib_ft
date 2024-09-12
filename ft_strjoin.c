#include "libft.h"
/*
A.K == strcat(malloc);

Parameters 
s1: The prefix string.
s2: The suffix string.

Return value 
The new string.
NULL if the allocation fails.

Description 
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i , j;
    size_t len;
    char *str;

    len = ft_strlen(s1) + ft_strlen(s2);
    
    if(!s1)
        s1 = "";
    if(!s2)
        s2 = "";
        
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return(NULL);
    i = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);
}