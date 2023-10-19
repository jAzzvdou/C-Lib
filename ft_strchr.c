/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:00:04 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/18 17:00:40 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	chaz;

	chaz = c;
	while (*s)
	{
		if (*s == chaz)
			return ((char *)s);
		s++;
	}
	return (NULL);
}