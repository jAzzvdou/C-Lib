/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:37:15 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/28 11:19:33 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*zero_s;

	zero_s = s;
	while (n--)
		zero_s[n] = 0;
}
/*
Essa função preenche N (n) casas de uma string (s) com NULL.
*/
