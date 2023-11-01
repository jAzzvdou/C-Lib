/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:09:25 by jazevedo          #+#    #+#             */
/*   Updated: 2023/11/01 14:44:05 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	return (0);
}
/*
Essa função verifica se o argumento passado como parâmetro (c)
é um número presente na tabela ASCII. Caso seja, retorna um número
diferente de zero, e, caso não seja, retorna zero.
*/
