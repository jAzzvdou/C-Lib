/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:00:04 by jazevedo          #+#    #+#             */
/*   Updated: 2023/11/01 14:46:36 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*my_strchr(const char *s, int c)
{
	char	ch;

	ch = c;
	while (*s && *s != ch)
		s++;
	if (*s == ch)
		return ((char *)s);
	return (NULL);
}
/*
Essa função verifica se existe um caractere N (c) em uma string N (s).
Caso exista, ela retorna o caractere N, e, caso não exista, retorna NULL.
*/
