#include "libft.h"

void	my_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		my_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			my_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
			my_putnbr_fd(n / 10, fd);
		my_putchar_fd((n % 10) + '0', fd);
	}
}
/*
Essa função imprime um número N (n) entre o int_min
e o int_max em uma saída N (fd).
*/
