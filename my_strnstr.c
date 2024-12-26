/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:25 by jazevedo          #+#    #+#             */
/*   Updated: 2023/11/08 14:25:25 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*my_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;

	little_size = my_strlen(little);
	if (little_size == 0)
		return ((char *)big);
	while (*big && little_size <= len--)
	{
		if (my_strncmp(big, little, little_size) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
/*
Essa função procura uma string X (little) dentro de uma
string Y (big) e, caso encontre, retorna a string X a partir
da primeira ocorrência com um tamanho X (len).
*/
