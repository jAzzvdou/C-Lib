/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:07:33 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/28 11:20:52 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*zero_s;

	zero_s = s;
	while (n--)
		zero_s[n] = c;
	return ((void *)zero_s);
}
/*
Essa função é parecida com a ft_bzero, mas com uma pequena diferença:
Diferentemente da ft_bzero, na ft_memset é possível escolher qual o
caractere (c) que vai preencher N (n) casas de uma string (s).
*/
