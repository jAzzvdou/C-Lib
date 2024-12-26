#include "libft.h"

int	my_isalnum(int c)
{
	if (my_isalpha(c) || my_isdigit(c))
		return (1);
	return (0);
}
/*
Essa função verifica se o argumento passado como parâmetro (c)
é uma letra ou número. Caso seja, retorna um número diferente
de zero e, caso não seja, retorna zero.
*/
