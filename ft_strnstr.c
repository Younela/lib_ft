/*finds the first occurrence of the substring needle in the string haystack,
 where not more than len characters are searched
 - No Match: Searching for "little" in "big" should return NULL
 -Empty little: Searching for an empty string should return big.
*/

#include "libft.h"

char *ft_strnstr(const char *big,	const char *little, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    if (little[i] == '\0')
		return ((char *)big);

    while (i < len)
    {
        j = 0;
        if (big[i] == little[j])
        {
            while ((big[i + j] == little[j]) && (i + j) < len)
            {
                if(little[j+1] == '\0')
                    return ((char *)(big + i));
                j++;
            }
        }
        i++;
    }
    return (NULL);
}