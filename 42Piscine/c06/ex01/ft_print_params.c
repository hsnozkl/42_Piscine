#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc > 1)
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
}
