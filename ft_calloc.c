/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:45:49 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/19 16:32:11 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;

	i = nmemb * size;
	if (i == 0)
		i = 1;
	ptr = malloc(i);
	if (ptr == NULL)
		return (NULL);
	while (i--)
		ptr[i] = 0;
	return (ptr);
}	
