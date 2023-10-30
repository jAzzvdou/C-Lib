/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jazevedo <jazevedo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:33:28 by jazevedo          #+#    #+#             */
/*   Updated: 2023/10/30 16:36:20 by jazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_l;

	if (lst == NULL)
		return (NULL);
	new_l = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		ft_lstadd_back(&new_l, new);
		lst = lst->next;
	}
	return (new_l);
}
/*
Essa função é parecida com a ft_lstiter, mas com uma diferença:
Diferentemente da ft_lstiter, a ft_lstmap, além de aplicar cada
node de uma lista X (lst) em uma função X (f), ela irá criar uma
nova lista para o resultados da transformação dos nodes da lista X,
já com memória alocada para os mesmos. Caso algum erro aconteça,
uma função Y (del) irá deletar os nodes e liberar a memória dos mesmos.
*/
