char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	chaz;

	i = -1;
	chaz = c;
	while (s[i++])
	i += 1;
	while (i--)
	{
		if (s[i] == chaz)
			return ((char *)s + i);
	}
	return (NULL);
}
