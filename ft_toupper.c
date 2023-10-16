int	ft_toupper(int nb)
{
	if (nb >= 'a' && nb <= 'z')
		return (nb - 32);
	return (nb);
}
