/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:55:04 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/20 18:15:56 by jazevedo         ###   ########.fr       */
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
