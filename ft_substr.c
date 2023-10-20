/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:43:48 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/20 18:50:23 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	begin;
	char	*new_s;

	begin = (size_t)start;
	while (s[begin] <= s[len])
		begin++;
	new_s = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_s == NULL)
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s))
		new_s[i] = s[i];
	new_s[i] = '\0';
	return (new_s);
}
