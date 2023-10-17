void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*new_dest;
	const char	*new_src;

	new_dest = dest;
	new_src = src;
	while (n--)
		new_dest[n] = new_src[n];
}
