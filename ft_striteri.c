/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:33:08 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/28 12:14:32 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	my_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = -1;
	while (s[++i])
		f(i, s + i);
}
/*
Essa função vai jogar uma string N (s) dentro de uma outra função, N (f).
Depois irá imprimir o resultado da função N.
*/
