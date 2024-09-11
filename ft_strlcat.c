//appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	result;

	i = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	
    if (dest_len < dstsize)
		result = dest_len + src_len;
	else
		result = src_len + dstsize;

	if (dstsize == 0)
		return (result);

	while (src[i] && dest_len + i < dstsize - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (result);
}