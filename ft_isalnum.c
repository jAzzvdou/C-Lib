/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:09:12 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/31 18:48:56 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	my_isalnum(int c)
{
	if (my_isalpha(c) || my_isdigit(c))
		return (1);
	return (0);
}
/*
Essa função verifica se o argumento passado como parâmetro (c)
é uma letra ou número. Caso seja, retorna um número diferente
de zero e, caso não seja, retorna zero.
*/
