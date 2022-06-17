int	is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_ALPHA(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

int	is_num(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (is_alpha(str[i]))
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if (!(is_alpha(str[i]) || is_num(str[i]) || is_ALPHA(str[i])))
			if (is_alpha(str[i + 1]))
				str[i + 1] -= 32;
		i++;
	}
	return (str);
}
