#include "libft.h"

/*
Parameters
s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.

Return value 
The substring. NULL if the allocation fails.

يخصص ويعيد جزء من النص ’s’. الجزء يبدأ عند الفهرس ’start’ ويمتلك حجم أقصى قدره ’len’.

*/
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t  i;
    size_t  str_len;
    char    *str;

    i = 0;    
    str_len = ft_strlen(s);

    if (!s)
        return(NULL);
    
    if (start >= str_len)
        return(ft_strdup(""));
    
    // Adjusting len with:
    if (start + len > str_len)
        len = str_len - start;
    /*
    is a precautionary measure.
    It ensures that you don’t allocate more memory than necessary and makes the function’s behavior more predictable and safe.
    
    */

    str = (char *)malloc(sizeof(char) * (len + 1));
    if(!str)
        return(NULL);
    while (s[start + i] && i < len)
    {
        str[i] = s[start + i]; 
        i++;
    }
    str[i] = '\0';
    return(str);
}