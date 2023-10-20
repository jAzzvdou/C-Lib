/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:57:14 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/20 18:53:02 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(void *dest, const char *src, int size)
{
	size_t	i;
	size_t	ii;
	size_t	dest_length;
	size_t	length;
	char	*new_dest;

	new_dest = (char *)dest;
	dest_length = 0;
	while (new_dest[dest_length])
		dest_length++;
	i = -1;
	length = 0;
	while (new_dest[++i] && size-- > 0)
		length++;
	ii = -1;
	while (src[++ii] && size-- > 1)
	{
		new_dest[i] = src[ii];
		i++;
	}
	if (size == 1 || src[ii] == 0)
		new_dest[i] = '\0';
	return (dest_length + length);
}
