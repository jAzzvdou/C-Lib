#include "libft.h"

char	*my_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_size;
	char	*new_s;

	s_size = my_strlen(s);
	if ((size_t)start > s_size)
		return (my_strdup(""));
	s += start;
	s_size -= start;
	if (s_size > len)
		s_size = len;
	new_s = malloc(sizeof(char) * (s_size + 1));
	if (new_s == NULL)
		return (NULL);
	i = -1;
	while (++i < s_size)
		new_s[i] = s[i];
	new_s[i] = '\0';
	return (new_s);
}
/*
Essa função irá procurar um caractere N (start) em uma string X (s)
e, assim que o encontrar, alocará memória para o tamanho de N caracteres (len)
e retornará a nova string.
*/
