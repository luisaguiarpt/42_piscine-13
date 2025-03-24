#include <unistd.h>
#include <fcntl.h>
#include "error_msg.h"
#include "ft_string.h"

int	ft_display_file(int fd);

int	main(int ac, char **av)
{
	int	fd;
	if (ac != 2)
	{
		if (ac == 1)
			ft_puterr(NAME_MISS);
		else if (ac > 2)
			ft_puterr(XS_ARGS);
		return (1);
	}
	if ((fd = open(av[1], O_RDONLY)) == -1)
	{
		ft_puterr(CANT_READ);
		return (2);
	}
	if (ft_display_file(fd))
	{
		ft_puterr(CANT_READ);
		return (2);
	}
	return (0);
}

int	ft_display_file(int fd)
{
	char	buff[30000];
	ssize_t	bytes_read;

	if (!(bytes_read = read(fd, buff, 30000)))
	{
		ft_puterr(CANT_READ);
		return (1);
	}
	ft_putstr(buff);
	return (0);
}
