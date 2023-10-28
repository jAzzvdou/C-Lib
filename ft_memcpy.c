/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:06:48 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/28 10:53:16 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*new_src;
	char		*new_dest;

	new_src = src;
	new_dest = dest;
	i = -1;
	while (++i < n)
		new_dest[i] = new_src[i];
	return ((void *)new_dest);
}
/*
Essa função copia N (n) carateres iniciais de uma string (src)
e cola em N caracteres iniciais de outra (dest).
*/
