/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:55:04 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/28 11:13:54 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*new_dest;
	const char	*new_src;

	new_dest = (char *)dest;
	new_src = (char *)src;
	if (dest > src)
		while (n--)
			new_dest[n] = new_src[n];
	else
		ft_memcpy(dest, src, n);
	return ((void *)dest);
}
/*
Essa função é parecida com a ft_memcpy, mas com uma pequena difereça:
Diferentemente ft_memcpy, a ft_memmove consegue sobrepor N caracteres (n)
iniciais de uma string (src) em outra string (dest). Ou seja, essa função
consegue substitur caracteres de uma string, o que a ft_memcpy não é capaz
de fazer.
*/
