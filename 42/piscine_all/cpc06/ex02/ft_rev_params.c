#include <unistd.h>

int	main(int argc, char **argv)
{
	int		index;
	char	newline;

	index = argc - 1;
	newline = '\n';
	while (index != 0)
	{
		while (*argv[index] != '\0')
		{
			write(1, argv[index], 1);
			argv[index]++;
		}
		write(1, &newline, 1);
		index--;
	}
	return (0);
}
