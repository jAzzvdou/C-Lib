#include "libft.h"

static size_t	house_places(int n)
{
	size_t	places;

	places = 0;
	if (n < 0)
		places++;
	while (n != 0)
	{
		n /= 10;
		places++;
	}
	return (places);
}

/*
Essa função auxiliar conta quantas casas decimais o número N (n)
tem. Caso o número seja negativo, a função conta mais um espaço
para o "-".
*/

char	*my_itoa(int n)
{
	size_t	size_n;
	char	*new_s;

	if (n == -2147483648)
		return (my_strdup("-2147483648"));
	if (n == 0)
		return (my_strdup("0"));
	size_n = house_places(n);
	new_s = malloc(sizeof(char) * (size_n + 1));
	if (new_s == NULL)
		return (NULL);
	new_s[size_n--] = '\0';
	if (n < 0)
	{
		new_s[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		new_s[size_n--] = n % 10 + '0';
		n /= 10;
	}
	return (new_s);
}
/*
Essa função é o inverso da my_atoi. Diferentemente da my_atoi, que
transforma uma string em um int, a my_itoa transforma um int, seja
ele negativo ou positivo, em uma string.
*/
