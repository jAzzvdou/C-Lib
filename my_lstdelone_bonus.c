#include "libft.h"

void	my_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
Essa função pega um node N (lst), o joga dentro
de uma função X (del) e, após isso, libera o node N
da memória.
*/
