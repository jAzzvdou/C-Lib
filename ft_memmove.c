/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:55:04 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/19 14:10:38 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*new_dest;
	const char	*new_src;
	const char	*temp;

	new_dest = dest;
	new_src = src;
	i = -1;
	while (++i < n || *src)
	{
		temp[i] = new_src[i];
		src++;
	}
	i = -1;
	while (++i < n || *dest)
	{
		new_dest[i] = temp[i];
		dest++;
	}
	return (dest);
}