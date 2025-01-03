#include "libft.h"

char	*my_strrchr(const char *s, int c)
{
	size_t	i;
	char	chaz;

	i = 0;
	chaz = c;
	while (s[i])
		i++;
	i += 1;
	while (i--)
		if (s[i] == chaz)
			return ((char *)s + i);
	return (NULL);
}
/*
Essa função é parecida com a função my_strchr, mas com uma diferença:
Diferentemente da my_strchr, a my_strrchr verifica se um existe
caractere N (c) em uma string X (s), lendo de trás para frente.
Caso exista, ela retorna o caractere N, e, caso não exista, retorna NULL.
*/
