/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:05:28 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/20 00:08:40 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	chaz;

	i = 0;
	chaz = c;
	while (s[i])
		i++;
	i += 1;
	while (i--)
		if (s[i] == chaz)
			return ((char *)s + i);
	return (NULL);
}
