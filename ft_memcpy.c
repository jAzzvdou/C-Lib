void	*ft_memcpy(void dest, const void src, size_t n)
{
	size_t	i;
	const char	*new_src;
	char	*new_dest;

	i = -1;
	new_src = src;
	new_dest = dest;
	while (i++ < n)
		new_dest[i] = new_src[i];
}
