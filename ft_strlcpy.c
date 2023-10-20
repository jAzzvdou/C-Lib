/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:03:04 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/20 18:44:57 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	length = 0;
	while (*src)
		length++;
	if (src == NULL || dest == NULL || size == 0)
		return (length);
	i = -1;
	size -= 1;
	while (src[++i] && i < size)
		dest[i] = src[i];
	dest[i] = '\0';
	return ((size_t)dest);
}
