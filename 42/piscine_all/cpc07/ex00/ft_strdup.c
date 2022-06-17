#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;
	char	*tmp;

	len = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (len + 1));
	tmp = str;
	if (str == NULL)
		return (NULL);
	while (*src)
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';
	return (tmp);
}
