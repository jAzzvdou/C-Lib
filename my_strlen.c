#include "libft.h"

size_t	my_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
Essa função vai contar a quantidade de caracteres
que uma string X (str) possuí.
*/
