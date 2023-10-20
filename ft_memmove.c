/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:55:04 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/20 00:01:39 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*new_dest;
	const char	*new_src;

	new_dest = dest;
	new_src = src;
	if (dst > src)
		while (n--)
			chr_dest[n] = chr_src[n];
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
