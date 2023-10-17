int	ft_atoi(const char *str)
{
	int	nb;
	int	mult;

	nb = 0;
	mult = 1;
	while (*str > 8 && *str < 14 || *str == 32)
		str++;
	if (*str == '-')
	{
		mult = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10 + *str - '0';
		str++;
	}
	return (nb * mult);
}
