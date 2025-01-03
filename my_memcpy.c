#include "libft.h"

void	*my_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*new_src;
	char		*new_dest;

	if (dest == NULL && src == NULL)
		return (NULL);
	new_src = src;
	new_dest = dest;
	i = -1;
	while (++i < n)
		new_dest[i] = new_src[i];
	return ((void *)new_dest);
}
/*
Essa função copia N (n) carateres iniciais de uma string (src)
e cola em N caracteres iniciais de outra (dest).
*/
