#include "libft.h"

void	my_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	my_lstlast(*lst)->next = new;
}
/*
Essa função adiciona um novo node (new)
no final de uma lista X (lst).
*/
