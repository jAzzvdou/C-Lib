#include "libft.h"

void	*my_memset(void *s, int c, size_t n)
{
	char	*zero_s;

	zero_s = s;
	while (n--)
		zero_s[n] = c;
	return ((void *)zero_s);
}
/*
Essa função é parecida com a my_bzero, mas com uma pequena diferença:
Diferentemente da my_bzero, na my_memset é possível escolher qual o
caractere (c) que vai preencher N (n) casas de uma string (s).
*/
