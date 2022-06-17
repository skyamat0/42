#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
