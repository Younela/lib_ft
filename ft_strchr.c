//returns a pointer to the first occurrence of the character c in the string s
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if(s[i] == (char)c)
            return ((char *)(s+i));
        i++;
    }
    // Check if c == '\0'
    if(s[i] == (char)c)
        return ((char *)(s + i));
    // if 'c' was not found in s
    return (NULL);
}