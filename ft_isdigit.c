/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:27:30 by jazevedo          #+#    #+#             */
/*   Updated: 2023/11/01 14:50:57 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
Essa função verifica se o argumento passado como parâmetro (c)
é um número entre 1 e 9. Caso seja, retorna um número diferente
de zero, e, caso não seja, retorna zero.
*/
