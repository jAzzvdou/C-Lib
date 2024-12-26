#include "libft.h"

int	my_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	n -= 1;
	i = -1;
	while ((s1[++i] || s2[i]) && i < n)
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
Essa função compara os primeiros N (n) caracteres iniciais
de uma string X (s1) com uma string Y (s2). Caso os caracteres
sejam diferentes, retorna o valor da diferença entre eles pela
tabela ASCII e, caso as strings sejam iguais, retorna zero.
*/
