#include "libft.h"

void	my_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	while (*lst)
	{
		t = (*lst)->next;
		my_lstdelone(*lst, del);
		*lst = t;
	}
}
/*
Essa função pega um node N (lst), o deleta e liberta da memória,
após isso, faz o mesmo com todos os próximos nodes, utilizando uma
função X (del).
*/
