#include "libft.h"

t_list	*my_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
Essa função retorna o último node de uma lista X (lst).
*/
