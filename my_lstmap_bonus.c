#include "libft.h"

t_list	*my_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_l;

	if (lst == NULL)
		return (NULL);
	new_l = NULL;
	while (lst)
	{
		new = my_lstnew(f(lst->content));
		if (new == NULL)
		{
			my_lstclear(&new_l, del);
			return (NULL);
		}
		my_lstadd_back(&new_l, new);
		lst = lst->next;
	}
	return (new_l);
}
/*
Essa função é parecida com a my_lstiter, mas com uma diferença:
Diferentemente da my_lstiter, a my_lstmap, além de aplicar cada
node de uma lista X (lst) em uma função X (f), ela irá criar uma
nova lista para o resultados da transformação dos nodes da lista X,
já com memória alocada para os mesmos. Caso algum erro aconteça,
uma função Y (del) irá deletar os nodes e liberar a memória dos mesmos.
*/
