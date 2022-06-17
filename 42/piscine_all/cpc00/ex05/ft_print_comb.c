#include <unistd.h>

void	ft_putspacom(void)
{
	char	space;
	char	conma;

	space = ' ';
	conma = ',';
	write(1, &space, 1);
	write(1, &conma, 1);
}

void	ft_putchars(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	X;
	char	Y;
	char	Z;

	X = '0';
	Y = X +1;
	Z = Y +1;
	while (X <= '7')
	{
		ft_putchars(X, Y, Z);
		if (X != '7')
			ft_putspacom();
		if (Z == '9')
		{
			if (Y == '8')
			{
				X++;
				Y = X;
			}
			Y++;
			Z = Y;
		}
		Z++;
	}
}
