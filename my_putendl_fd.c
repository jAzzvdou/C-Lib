#include "libft.h"

void	my_putendl_fd(char *s, int fd)
{
	my_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
Essa função imprime uma string N (s) em uma saída N (fd)
seguido por uma quebra de linha.
*/
