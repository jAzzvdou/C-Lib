size_t	ft_strlcat(void *dest, const char *src, int size)
{
	size_t	i;
	size_t	ii;
	size_t	dest_length;
	size_t	length;

	i = -1;
	ii = -1;
	dest_length = -1;
	while (dest[dest_length++])
	while (dest[i++] && size > 0)
	{
		lenght++;
		size--;
	}
	while (src[ii++] && size > 1)
	{
		dest[i] = src[ii];
		i++;
		size--;
	}
	if (size == 1 || src[ii] == NULL)
		dest[i] = '\0';
	return (dest_length + length);
}
