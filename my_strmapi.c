/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:24:17 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/30 16:53:01 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*my_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_s;

	new_s = malloc(sizeof(char) * (my_strlen(s) + 1));
	if (new_s == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		new_s[i] = f(i, s[i]);
	new_s[i] = '\0';
	return (new_s);
}
/*
Essa função joga todos os caracteres de uma string X (s)
para dentro de uma função X (f) e cria uma nova string,
já com memória alocada para a mesma, com o resultado da 
transformação desses caracteres feito pela função X.
*/
