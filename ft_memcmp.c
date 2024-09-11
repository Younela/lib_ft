//compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2
#include "libft.h"

int ft_memcmp(const void *b1, const void *b2, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        unsigned char byte1 = ((unsigned char *)b1)[i];
        unsigned char byte2 = ((unsigned char *)b2)[i];
        if (byte1 != byte2)
            return (byte1 - byte2);
        i++;
    }
    return (0);   
}