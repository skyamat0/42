int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ('0' <= *str && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}
