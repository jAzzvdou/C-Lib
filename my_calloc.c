#include "libft.h"

void	*my_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;

	i = nmemb * size;
	ptr = malloc(i);
	if (ptr == NULL)
		return (NULL);
	my_bzero(ptr, i);
	return (ptr);
}
/*
Essa função aloca memória para N objetos (nmemb)
com o tamanho em bytes de cada um desses objetos (size).
*/
