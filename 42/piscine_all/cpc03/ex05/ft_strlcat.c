unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = ft_strlen(dest);
	len = ft_strlen(dest);
	j = 0;
	if (i >= size)
		return (size + ft_strlen(src));
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (len + ft_strlen(src));
}
