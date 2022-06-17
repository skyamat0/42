int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (('a' <= *str && *str <= 'z') || ('A' <= *str && *str <= 'Z'))
			str++;
		else
			return (0);
	}
	return (1);
}
