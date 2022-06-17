int	isprime(int nb)
{
	long int	index;

	index = 2;
	if (nb < 2)
		return (0);
	while (index * index <= nb)
	{
		if ((nb % index) == 0)
			return (0);
		index++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long int	index;

	index = nb;
	if (isprime(nb))
		return (nb);
	while (index < 2147483647)
	{
		if (isprime(index))
			break ;
		index++;
	}
	return (index);
}
