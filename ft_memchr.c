//scans the initial n bytes of the memory area pointed to by s for the first instance of c
#include "libft.h"

void *ft_memchr(const void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        unsigned char byte1 = ((unsigned char *)b)[i];
        if (byte1 == (char)c)
            return (((unsigned char *)b)+i);
        i++;
    }
    return(NULL);
}

/*
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*obj;

	i = 0;
	obj = (unsigned char *)s;
	while (i < n)
	{
		if (obj[i] == (unsigned char)c)
			return (&obj[i]);
		i++;
	}
	return (0);
}
*/