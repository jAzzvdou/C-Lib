#include "libft.h"

int	my_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*new_s1;
	unsigned const char	*new_s2;

	new_s1 = s1;
	new_s2 = s2;
	i = -1;
	while (++i < n)
		if (new_s1[i] != new_s2[i])
			return (new_s1[i] - new_s2[i]);
	return (0);
}
/*
Essa função compara duas strings passadas (s1 e s2) até os
primeiros N carateres (n). Caso as duas strings tenham algum
caratere diferente, retorna a diferença entre eles na tabela
ASCII, e, caso as duas strings sejam iguais, retorna zero.
*/
