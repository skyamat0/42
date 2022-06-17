#include <stdio.h>
#include <unistd.h>

//文字列出力のやつ
void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
//文字の長さ
int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}




//char	building_puzzle(int **viewpoint)
//{
	//return ('0');
//}

//文字列の個数：argc, 文字列:*argv

int		main(int argc, char *argv[])
{
	int		i;
	char	nums[256];

	i = 0;
	if (argc != 2)
	{
		ft_putstr("Error");
		return (0);
	}

	printf("%s\n", argv[1]);
	while (*argv[1] != '\0')
	{
		if (i % 2 == 0)
		{
			if (49 <= *argv[1] && *argv[1] <= 52)
			{
				nums[i] = *argv[1];
				printf("%c ", nums[i]);
			}
			else
			{
				ft_putstr("Error");
				return (0);
			}
		}
		argv[1]++;
		i++;
	}
	return (0);
}
