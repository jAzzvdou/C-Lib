/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:57:14 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/18 16:59:49 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(void *dest, const char *src, int size)
{
	size_t	i;
	size_t	ii;
	size_t	dest_length;
	size_t	length;

	dest_length = 0;
	while (dest[dest_length])
		dest_length++;
	i = -1;
	while (dest[++i] && size > 0)
	{
		lenght++;
		size--;
	}
	ii = -1;
	while (src[++ii] && size > 1)
	{
		dest[i] = src[ii];
		i++;
		size--;
	}
	if (size == 1 || src[ii] == NULL)
		dest[i] = '\0';
	return (dest_length + length);
}
