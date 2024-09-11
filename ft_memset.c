//sets the first len bytes of the memory area pointed to by s to the value specified by c
#include "libft.h"

void *ft_memset(void *dest, int c,size_t	len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)dest)[i] = (unsigned char)c;
        i++;
    }
    return (dest);
}