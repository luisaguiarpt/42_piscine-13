#include <unistd.h>

int	main(int ac, char **av)
{
	(void) ac;
	while (**av)
	{
		write(1, &(**av), 1);
		(*av)++;
	}
	write(1, "\n", 1);
}
