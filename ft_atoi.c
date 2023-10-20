/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:04:29 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/19 23:43:44 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	mult;

	nb = 0;
	mult = 1;
	while (*nptr > 8 && *nptr < 14 || *nptr == ' ')
		nptr++;
	if (*nptr == '-')
	{
		mult = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		nb *= 10 + *nptr - '0';
		nptr++;
	}
	return (nb * mult);
}
