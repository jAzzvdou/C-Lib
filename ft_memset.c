/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:07:33 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/18 17:08:11 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void s, int c, size_t n)
{
	char	*new_s;

	new_s = s;
	while (n--)
		zero_s[n] = c;
}