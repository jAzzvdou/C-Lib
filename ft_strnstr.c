/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:25 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/31 14:32:33 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;

	if (*little == '\0' || little == big)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	little_size = ft_strlen(little);
	while (*big && little_size <= --len)
	{
		if (ft_memcmp(big, little, little_size) == 0)
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
