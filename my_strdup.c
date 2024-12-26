#include "libft.h"

char	*my_strdup(const char *s)
{
	int		i;
	char	*final;

	final = (char *)malloc(sizeof(char) * (my_strlen(s) + 1));
	if (final == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		final[i] = s[i];
	final[i] = '\0';
	return (final);
}
/*
Essa função aloca memória para uma string N (s) e copia toda essa string
para a memória alocada para a mesma.
*/
