#include "libft.h"

void	my_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = -1;
	while (s[++i])
		f(i, s + i);
}
/*
Essa função vai jogar uma string N (s) dentro de uma outra função, N (f).
Depois irá imprimir o resultado da função N.
*/
