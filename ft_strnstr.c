/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:53:06 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/18 18:20:43 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		ii;
	const char	*memcmp_big;
	const char	*memcmp_little;
	size_t		diference;

	if (*big == NULL || len == NULL)
		return (NULL);
	if (*little == NULL)
		return ((char *)big);
	i = 0;
	while (little[i])
		i++;
	while (*big && i <= len)
	{
		ii = -1;
		memcmp_big = big;
		memcmp_little = little;
		while (++ii != i)
			if (big[ii] != little[ii])
				diference = memcmp_big[i] - memcmp+little[i];
		if (diference == 0)
			return ((char *)big);
		len--:
		big++;
	}	
}
