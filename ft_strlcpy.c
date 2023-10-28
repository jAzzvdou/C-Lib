/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:03:04 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/28 12:25:28 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (src == NULL || dst == NULL || size == 0)
		return (ft_strlen(src));
	size -= 1;
	i = -1;
	while (src[++i] && i < size)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
Essa função vai copiar N caracteres (size) iniciais de uma string X (str)
e colar no final de uma string Y (dst).
*/
