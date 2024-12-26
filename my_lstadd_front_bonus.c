#include "libft.h"

void	my_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
Essa função adiciona um novo node (new)
no começo de uma lista X (lst).
*/
