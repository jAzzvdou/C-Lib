/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:52:40 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/18 16:54:21 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		chaz;
	const char	*new_s;

	i = -1;
	chaz = c;
	new_s = s;
	while (n--)
		if (s[++i] == chaz)
			return (&s[i]);
	return (NULL);
}
