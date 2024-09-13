#include "libft.h"
#include <stdio.h>
/*
Parameters 
s1: The string to be trimmed.
set: The reference set of characters to trim.

Return value 
The trimmed string.
NULL if the allocation fails.

Description
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string
*/
char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t len;
    size_t i;
    char *str;

    if (!s1 || !set)
        return NULL;

    // Initialize start and end indices
    start = 0;
    end = ft_strlen(s1);

    // Find the first index where the character is not in 'set'
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    // If the entire string is trimmed
    if (start == end)
        return ft_strdup("");

    // Find the last index where the character is not in 'set'
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    len = end - start;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;

    // Copy the trimmed string
    i = 0;
    while (i < len)
    {
        str[i] = s1[start + i];
        i++;
    }
    str[i] = '\0';
    // or ++>> return (ft_substr(s, start, end - start + 1));
    return str;

}

/*char *ft_strtrim(char const *s1, char const *set)
{
    size_t start, end, i, j;
    char *str;

    // Find the start position
    start = 0;    
    while (s1[start])
    {
        i = 0;
        while (set[i])
        {
            if (s1[start] == set[i])
                break;
            i++;
        }
        if (set[i] == '\0')
            break;
        start++;
    }
    // If the string is fully trimmed
    if (s1[start] == '\0')
        return (ft_strdup(""));

    // Find the end position
    end = start;
    while (s1[end])
        end++;
    end--;

    while (end > start)
    {
        i = 0;
        while (set[i])
        {
            if (s1[end] == set[i])
                break;
            i++;
        }
        if (set[i] == '\0')
            break;
        end--;
    }

    // Allocate memory for the trimmed string
    str = (char *)malloc(sizeof(char) * (end - start + 2));
    if (!str)
        return (NULL);

    // Copy the trimmed part
    i = 0;
    while (start <= end)
    {
        str[i] = s1[start];
        i++;
        start++;
    }
    str[i] = '\0';

    return (str);
}
*/

int main()
{
    char s[] = "eeooohello me againeeooo";
    char set[] = "enho";
    printf("%s",ft_strtrim(s,set));
}