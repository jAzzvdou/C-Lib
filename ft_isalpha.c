/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:38:03 by jazevedo          #+#    #+#             */
/*   Updated: 2023/11/01 14:28:40 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
Essa função verifica se o argumento passado como parâmetro (c)
é uma letra, seja ela maiúscula ou minúscula. Caso seja, retorna
um número diferente de zero, e, caso não seja, retorna zero.
*/
