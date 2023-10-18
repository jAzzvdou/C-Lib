/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:28:04 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/18 16:56:53 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		i;
	int		n;
	char	*final;

	i = 0;
	while (src[i])
		i++;
	final = (char *)malloc(sizeof(char) * (i + 1));
	if (final == NULL)
		return (NULL);
	n = -1;
	while (src[++n])
		final[n] = src[n];
	final[n] = '\0';
	return (final);
}
