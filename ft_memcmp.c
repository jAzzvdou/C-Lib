int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const char	*new_s1;
	const char	*new_s2;

	i = -1;
	new_s1 = s1;
	new_s2 = s2;
	while (++i != n)
	{
		if (s1[i] != s2[i])
			return (new_s1[i] - new_s2[i]);
	}
	return (0);
}
