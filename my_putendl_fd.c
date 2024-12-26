/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:09:50 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/28 11:24:14 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	my_putendl_fd(char *s, int fd)
{
	my_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
Essa função imprime uma string N (s) em uma saída N (fd)
seguido por uma quebra de linha.
*/
