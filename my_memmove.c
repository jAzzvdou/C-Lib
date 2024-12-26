#include "libft.h"

void	*my_memmove(void *dest, const void *src, size_t n)
{
	char		*new_dest;
	const char	*new_src;

	new_dest = (char *)dest;
	new_src = (char *)src;
	if (dest > src)
		while (n--)
			new_dest[n] = new_src[n];
	else
		my_memcpy(dest, src, n);
	return ((void *)dest);
}
/*
Essa função é parecida com a my_memcpy, mas com uma pequena difereça:
Diferentemente my_memcpy, a my_memmove consegue sobrepor N caracteres (n)
iniciais de uma string (src) em outra string (dest). Ou seja, essa função
consegue substitur caracteres de uma string, o que a my_memcpy não é capaz
de fazer.
*/
