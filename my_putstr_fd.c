#include "libft.h"

void	my_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}
/*
Essa função imprime uma string N (s) em uma saída N (fd).
*/
