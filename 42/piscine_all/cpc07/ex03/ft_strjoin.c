#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_str_ultimate_len(char **str, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(str[i]);
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		length;

	if (size == 0)
	{
		str = (char *)malloc(0);
		return (str);
	}
	i = 0;
	length = ((size - 1) * ft_strlen(sep));
	length += ft_str_ultimate_len(strs, size);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return ("");
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size -1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
