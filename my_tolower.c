/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:31:28 by jazevedo          #+#    #+#             */
/*   Updated: 2023/11/01 14:51:36 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
Essa função transforma uma letra N (c) maiúscula em minúscula.
*/
