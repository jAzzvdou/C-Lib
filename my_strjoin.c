#include "libft.h"

char	*my_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*new_s;

	new_s = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		new_s[i++] = *s1++;
	while (*s2)
		new_s[i++] = *s2++;
	new_s[i] = '\0';
	return (new_s);
}
/*
Essa função vai alocar memória para uma string X (s1) + uma string Y (s2) e
vai concatená-las na memória alocada para as mesmas.
*/
