int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (32 <= *str && *str <= 127)
			str++;
		else
			return (0);
	}
	return (1);
}
