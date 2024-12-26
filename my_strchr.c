#include "libft.h"

char	*my_strchr(const char *s, int c)
{
	char	ch;

	ch = c;
	while (*s && *s != ch)
		s++;
	if (*s == ch)
		return ((char *)s);
	return (NULL);
}
/*
Essa função verifica se existe um caractere N (c) em uma string N (s).
Caso exista, ela retorna o caractere N, e, caso não exista, retorna NULL.
*/
