/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:06:43 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/23 15:05:51 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	char	*new_s;

	new_s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		new_s[i++] = *s1++;
	while (*s2)
		new_s[i++] = *s2++;
	new_s[i] = '\0';
	return (new_s);
}
