#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_tmp;
	const unsigned char	*src_tmp;

	if (dest == NULL || src == NULL)
		return (NULL);
	if (n == 0 || dest == src)
		return (dest);
	dest_tmp = (unsigned char *)dest;
	src_tmp = (const unsigned char *)src;
	while (n > 0)
	{
		*dest_tmp++ = *src_tmp++;
		n--;
	}
	return (dest);
}
