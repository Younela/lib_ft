//
#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t len)
{
    size_t i;

    i = 0;
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
// mt5damx b s[i] != '\0' 7ik memcpy mxi strncpy
    while (i < len)
    {
        d[i] = s[i];
        i++;
    }
    // d[i] = '\0';
    return (dst);
}