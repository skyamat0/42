int	ft_atoi(char *str)
{
	int	minus_count;
	int	ret;

	minus_count = 1;
	ret = 0;
	if (*str == '\0')
		return (0);
	while ((9 <= *str && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus_count *= (-1);
		str++;
	}
	while (('0' <= *str && *str <= '9') && *str != '\0')
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	ret *= minus_count;
	return (ret);
}
