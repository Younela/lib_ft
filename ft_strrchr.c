//returns a pointer to the last occurrence of the character c in the string s
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    char ch = (char)c;

    i = ft_strlen(s);

    // Search for the character from the end of the string
    while (i > 0)
    {
        if (s[i - 1] == ch)
            return (char *)(s + i - 1);
        i--;
    }

    // Check if the character is at the beginning of the string
    if (s[i] == ch)
        return (char *)(s + i);

    return NULL;
}

/*char *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);

    while (i > 0)
    {
        if (s[i] == (char)c)
            return ((char *)(s+i));
        i--;
    }
    return (NULL);
}*/

/*
char *ft_strrchr(const char *s, int c)
{
    int i;
    int j;

    i = 0;
    j = -1;

    while (s[i])
    {
        if (s[i] == (char)c)
            j = i;
        i++;
    }

    if (s[i] == (char)c)
        return ((char *)(s + i));

    if (j != -1)
        return ((char *)(s + j));

    return (NULL);
}
*/