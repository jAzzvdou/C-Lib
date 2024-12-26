#include "libft.h"

size_t	my_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;

	if (size == 0)
		return (my_strlen(src));
	dst_size = my_strlen(dst);
	if (size == 0 || size <= dst_size)
		return (size + my_strlen(src));
	size -= 1;
	i = -1;
	while (src[++i] && dst_size + i < size)
		dst[dst_size + i] = src[i];
	dst[dst_size + i] = '\0';
	return (dst_size + my_strlen(src));
}
/*
Essa função vai concatenar N caracteres (size) de uma string X (src)
em uma string Y (dst) e retornar a soma do tamanho das strings. Caso
o retorno tenha um valor diferente da soma das strings, então houve
algum erro durante a concatenação.
*/
