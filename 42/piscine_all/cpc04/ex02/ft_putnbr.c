#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (0 <= nb && nb < 10)
	{
		ft_putchar('0' + nb % 10);
	}
	else if (nb < 0)
	{
		nb *= (-1);
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
	return ;
}
