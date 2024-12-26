#include "libft.h"

void	my_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
Essa função imprime um caractere N (c) em uma saída N (fd)
*/
