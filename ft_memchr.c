void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	chaz;
	const char	*new_s;

	i = -1;
	chaz = c;
	new_s = s;
	while (n--)
	{
		if (s[i++] == chaz)
			return (&s[i]);
	}
	return (NULL);
}
