/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:03:04 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/30 12:53:05 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	my_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (src == NULL || dst == NULL || size == 0)
		return (my_strlen(src));
	size -= 1;
	i = -1;
	while (src[++i] && i < size)
		dst[i] = src[i];
	dst[i] = '\0';
	return (my_strlen(src));
}
/*
Essa função vai copiar N caracteres (size) iniciais de uma string X (str)
e colar no final de uma string Y (dst) e retornar o tamanho dessa cópia.
Caso o retorno não tenha o tamanho dessa cópia, então houve algum erro
durante a cópia e cola.
*/
