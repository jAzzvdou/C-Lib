/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:43:48 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/30 13:58:23 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_s1;
	char	*new_s;

	if (set == NULL)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s1 = ft_strlen(s1) - 1;
	while (s1[size_s1] && ft_strchr(set, s1[size_s1]))
		size_s1--;
	new_s = ft_substr(s1, 0, size_s1 + 1);
	return (new_s);
}
/*
Essa função remove os primeiros e os últimos N
caracteres de uma string X (s1) a partir de um filtro (set).
Exemplo:
s1 = ././:;string;:\.\.
filtro = ./:;\
resultado = string
*/
