char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str != '\0')
	{
		if ('a' <= *str && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (tmp);
}
