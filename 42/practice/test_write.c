#include <unistd.h>

void ys_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int ys_strlen(char *c)
{
	int len;

	len = 0;
	while (*c != '\0')
	{
		c++;
		len++;
	}
	return len;
}

void ys_putstr(char *c)
{
	int buff;

	buff = ys_strlen(c);
	write(1, c, buff);
	return ;
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	argv++;
	while (i != argc)
	{
		ys_putstr(*argv);
		ys_putchar('\n');
		argv++;
	}
	return 0;
}
