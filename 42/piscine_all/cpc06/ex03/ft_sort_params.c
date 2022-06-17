#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == '\0' || *s2 == '\0')
		return (*s1 - *s2);
	return (0);
}

void	ft_print_params(int argc, char **argv)
{
	char	newline;
	int		index;

	index = 1;
	newline = '\n';
	while (index != argc)
	{
		while (*argv[index] != '\0')
		{
			write(1, argv[index], 1);
			argv[index]++;
		}
		write(1, &newline, 1);
		index++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	int		index;
	char	*tmp;

	index = 1;
	while (index < argc - 1)
	{
		if (ft_strcmp(argv[index], argv[index + 1]) > 0)
		{
			tmp = argv[index];
			argv[index] = argv[index + 1];
			argv[index + 1] = tmp;
			index = 0;
		}
		index++;
	}
	ft_print_params(argc, argv);
	return (0);
}
