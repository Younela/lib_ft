#include "libft.h"

/*
Parameters 
s: The string on which to iterate.
f: The function to apply to each character.

Return value 
The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.

Description
Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to collect the
results from the successive applications of f.

*/

// (*f)(unsigned int, char) is a pointer to a function that takes two arguments: an unsigned int and a char.
// The return type of (*f) is char.


// char reverse_capitalization(unsigned int index, char c);
// char duplicate_based_on_index(unsigned int index, char c);


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    size_t i;
    if(!s || !f)
        return (NULL);

    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if(!str)
        return(NULL);
    i = 0;
    while (s[i])
    {
        str[i] = f(i,s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);    
}


// char reverse_capitalization(unsigned int index, char c)
// {
//     if (isupper(c))
//         return tolower(c);
//     else
//         return toupper(c);
// }

// char duplicate_based_on_index(unsigned int index, char c)
// {
//     return (char)((c == ' ' ? c : c + index));
// }

// int main()
// {
//     char s[] = "Libft";
//     char c[] = "hello";

//     printf("%s\n",ft_strmapi(s,duplicate_based_on_index));
//     printf("%s",ft_strmapi(c,reverse_capitalization));
// }