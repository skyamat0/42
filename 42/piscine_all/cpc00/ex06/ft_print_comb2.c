#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchars2(int num1, int num2)
{
	char	x;
	char	y;
	char	z;
	char	w;

	x = '0' + num1 /10;
	y = '0' + num1 %10;
	z = '0' + num2 /10;
	w = '0' + num2 %10;
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(' ');
	ft_putchar(w);
	ft_putchar(z);
}

void	ft_print_comb2(void)
{
	int	m;
	int	n;

	m = 0;
	n = 1;
	while (m <= 98)
	{
		ft_putchars2(m, n);
		if (m != 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		if (n == 99)
		{
			m++;
			n = m;
		}
		n++;
	}
}
