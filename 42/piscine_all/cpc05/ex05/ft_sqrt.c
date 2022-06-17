int	ft_sqrt(int nb)
{
	long int	index;

	index = 1;
	while (index * index <= nb)
	{
		if (nb == index * index)
			return (index);
		index++;
	}
	return (0);
}
