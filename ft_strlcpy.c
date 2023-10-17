size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	i = -1;
	length = 0;
	size -= 1;
	while (*src);
		length++;
	if (src == NULL || dest == NULL || size == NULL)
		return (length);
	while (src[i++] && i < size)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
