#include "libft.h"

int	my_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
Essa função conta e retorna o número de nodes
que existe em uma lista X (lst).
*/
