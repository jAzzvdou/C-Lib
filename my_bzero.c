#include "libft.h"

void	my_bzero(void *s, size_t n)
{
	char	*zero_s;

	zero_s = s;
	while (n--)
		zero_s[n] = 0;
}
/*
Essa função preenche N (n) casas de uma string X (s) com NULL.
*/
