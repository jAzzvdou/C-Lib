#include "libft.h"

t_list	*my_lstnew(void *content)
{
	t_list	*new_l;

	new_l = malloc(sizeof(t_list));
	if (new_l == NULL)
		return (NULL);
	new_l->content = content;
	new_l->next = NULL;
	return (new_l);
}
/*
Essa função cria um novo node em uma lista X (content)
e aloca memória para o mesmo. Após isso, cria também
um novo "NULL" para ser o final dessa lista X.
*/
