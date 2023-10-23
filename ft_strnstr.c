/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:25 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/23 14:37:02 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;

	if (len == 0)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	little_size = ft_strlen(little);
	while (*big && little_size <= --len)
	{
		if (ft_memcmp(big, little, little_size) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
