/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:03:21 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/20 18:08:47 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	decimal_places(int n)
{
	int	places;

	places = 1;
	if (n == 0)
		places++;
	if (n < 0)
	{
		places++;
		n *= -1;
	}
	if (n > 9)
	{
		while (n != 0)
		{
			n /= 10;
			places++;
		}
	}
	return (places);
}

char	*ft_itoa(int n)
{
	size_t	size_n;
	char	*new_s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size_n = decimal_places(n);
	new_s = malloc(sizeof(char) * (size_n + 1));
	if (n < 0)
	{
		new_s[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		new_s[size_n--] = n % 10 + '0';
		n /= 10;
	}
	return (new_s);
}
