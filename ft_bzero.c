void	ft_bzero(void *s, size_t n)
{
	char	*zero_s;

	zero_s = s;
	while (n--);
		zero_s[n] = 0;
}
