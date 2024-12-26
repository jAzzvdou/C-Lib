#include "libft.h"

static size_t	sub_str(char const *s, char c)
{
	size_t	length;

	length = 0;
	while (*s)
	{
		if (*s != c)
			length++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (length);
}

/*
Essa função auxiliar vai contar a quantidade das novas palavras
que serão formadas.
*/

static void	free_split(char **final)
{
	size_t	i;

	i = -1;
	while (final[++i])
		free(final[i]);
	free(final);
}

/*
Essa função auxiliar vai liberar a memória separada para as
novas palavras caso algum erro durante o processo de alocação das
mesmas na memória aconteça.
*/

char	**my_split(char const *s, char c)
{
	size_t	i;
	size_t	words;
	size_t	wordsize;
	char	**final;

	if (s == NULL)
		return (NULL);
	words = sub_str(s, c);
	final = malloc(sizeof(char *) * (words + 1));
	if (final == NULL)
		return (NULL);
	i = -1;
	while (++i < words)
	{
		while (*s == c)
			s++;
		wordsize = 0;
		while (s[wordsize] && s[wordsize] != c)
			wordsize++;
		final[i] = my_substr(s, 0, wordsize);
		if (final[i] == NULL)
			return (free_split(final), NULL);
		s += wordsize;
	}
	return (final[i] = NULL, final);
}
/*
Essa função verifica se existe um caractere N (c) dentro de uma string N (s).
Caso exista, quebrará a palavra na posição aonde caractere N está e as novas
palavras formadas não conterão mais o caractere N nelas. Após a separação,
as novas palavras são alocadas na memória separadas para os mesmas, caso ocorra
algum erro durante esse processo, a memória separada é liberta para que não
ocorra vazamentos.
*/
