#include <unistd.h>

int	main(int argc, char **argv)
{
	char	newline;

	(void)argc;
	newline = '\n';
	while (*argv[0] != '\0')
	{
		write(1, argv[0], 1);
		argv[0]++;
	}
	write(1, &newline, 1);
	return (0);
}
