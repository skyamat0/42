#include <stdlib.h>
int		sepa(char	c, char	*charset);
int		resulte(char	**result, char	*str, char	*charset);
int		get_chunk(char	*str, char	*charset, char	**chunk);
void	ft_strlcpy(char	*dst, char	*src, unsigned int	size);

char	**ft_split(char	*str, char	*charset)
{
	int		i;
	int		count;
	char	**result;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (sepa(str[i], charset))
			i++;
		else
		{
			count++;
			while (str[i] && !sepa(str[i], charset))
				i++;
		}
	}
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (result == NULL)
		return (NULL);
	if (!resulte(result, str, charset))
		return (NULL);
	result[count++] = NULL;
	return (result);
}

int	resulte(char	**result, char	*str, char	*charset)
{
	int		i;
	int		count;
	int		chunk_len;
	char	*tmp;

	tmp = NULL;
	i = 0;
	count = 0;
	chunk_len = 0;
	while (str[i])
	{
		if (sepa(str[i], charset))
			i++;
		else
		{
			chunk_len = get_chunk(str + i, charset, &tmp);
			if (chunk_len == -1)
				return (0);
			ft_strlcpy(tmp, str + i, chunk_len + 1);
			result[count++] = tmp;
			i += chunk_len;
		}
	}
	return (1);
}

int	get_chunk(char	*str, char	*charset, char	**chunk)
{
	int	i;

	i = 0;
	while (!sepa(str[i], charset) && str[i])
		i++;
	*chunk = malloc(i + 1);
	if (*chunk == NULL)
		return (-1);
	return (i);
}

int	sepa(char	c, char	*charset)
{
	while (*charset)
		if (*charset++ == c)
			return (1);
	return (0);
}

void	ft_strlcpy(char	*dst, char	*src, unsigned int	size)
{
	unsigned int	index;

	index = 0;
	while (index < size - 1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = 0;
}
