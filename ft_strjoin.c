/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:06:43 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/20 18:40:27 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	char	*new_s;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	new_s = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (new_s == NULL)
		return (NULL);
	while (size_s1--)
		*new_s++ = *s1++;
	while (size_s2--)
		*new_s++ = *s2++;
	return (new_s);
}
