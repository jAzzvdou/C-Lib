/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:25 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/20 18:47:06 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*new_s1;
	char	*new_s2;

	new_s1 = (char *)s1;
	new_s2 = (char *)s2;
	i = -1;
	while (++i != n)
		if (new_s1[i] != new_s2[i])
			return (new_s1[i] - new_s2[i]);
	return (0);
}

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	size_big;

	if (len == 0)
		return (0);
	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i])
		i++;
	size_big = i;
	while (*big && size_big <= len)
	{
		if (compare(big, little, size_big) == 0)
			return ((char *)big);
		len--;
		big++;
	}
	return (0);
}
