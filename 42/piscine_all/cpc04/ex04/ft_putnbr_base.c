#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr_base(int nbr, int baselen, char *base)
{
	if (nbr == -2147483648)
	{
		putnbr_base(nbr / baselen, baselen, base);
		ft_putchar(base[nbr % baselen]);
	}
	else if (nbr < 0)
	{
		nbr *= (-1);
		ft_putchar('-');
		putnbr_base(nbr, baselen, base);
	}
	else if (0 <= nbr && nbr < baselen)
		ft_putchar(base[nbr % baselen]);
	else
	{
		putnbr_base((nbr / baselen), baselen, base);
		ft_putchar(base[nbr % baselen]);
	}
	return ;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		else if ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
			return (0);
		i++;
	}
	return (i);
}

int	checkbase(char *str, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;

	baselen = ft_strlen(base);
	if (baselen < 2)
		return ;
	if (checkbase(base, baselen))
	{
		putnbr_base(nbr, baselen, base);
	}
	else
		return ;
}
