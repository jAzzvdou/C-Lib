/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:24:17 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/19 23:37:19 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_s;

	new_s = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_s == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		new_s[i] = f(i, s[i]);
	new_s[i] = '\0';
	return (new_s);
}
