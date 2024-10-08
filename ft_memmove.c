//copies len bytes from string src to string dst. The two strings may overlap;
// the copy is always done in a non-destructive manner
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dst;
	if (dst <= src)
		dst = ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			s2[len] = s1[len];
	}
	return (dst);
}