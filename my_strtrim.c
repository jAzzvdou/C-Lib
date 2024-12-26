#include "libft.h"

char	*my_strtrim(char const *s1, char const *set)
{
	size_t	size_s1;
	char	*new_s;

	if (set == NULL)
		return (my_strdup(s1));
	while (*s1 && my_strchr(set, *s1))
		s1++;
	size_s1 = my_strlen(s1) - 1;
	while (s1[size_s1] && my_strchr(set, s1[size_s1]))
		size_s1--;
	new_s = my_substr(s1, 0, size_s1 + 1);
	return (new_s);
}
/*
Essa função remove os primeiros e os últimos N
caracteres de uma string X (s1) a partir de um filtro (set).
Exemplo:
s1 = ././:;string;:\.\.
filtro = ./:;\
resultado = string
*/
