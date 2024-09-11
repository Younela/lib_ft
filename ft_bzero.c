//erases the data in the n bytes of the memory starting at the location pointed to by s,
// by writing zeros (bytes containing '\0') to that area
#include "libft.h"

void bzero(void *b, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = 0;
        i++;
    }
    return (b);
}
