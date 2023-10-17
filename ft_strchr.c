char	*ft_strchr(const char *s, int c)
{
	char	chaz;

	chaz = c;
	while (*s)
	{
		if (*s == chaz)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
