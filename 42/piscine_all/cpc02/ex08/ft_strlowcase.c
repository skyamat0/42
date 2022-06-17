char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str != '\0')
	{
		if ('A' <= *str && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (tmp);
}
