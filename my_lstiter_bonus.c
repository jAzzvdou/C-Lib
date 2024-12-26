#include "libft.h"

void	my_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
Essa função pega os nodes uma lista X (lst) e os
aplica em uma função X (f).
*/
