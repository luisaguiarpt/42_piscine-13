#include <unistd.h>

void	print_address(unsigned long addr);
void	print_in_hex(void *addr);
void	*print_str(void *addr);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned long	address;
	void			*tmp;

	tmp = addr;
	i = 0;
	while (i < (size / 16) + 1)
	{
		address = (unsigned long)tmp;
		print_address(address);
		write(1, ":", 1);
		print_in_hex(tmp);
		tmp = print_str(tmp);
		write(1, "\n", 1);
		i++;
	}
	return (addr);
}

void	print_address(unsigned long addr)
{
	int				i;
	int				j;
	unsigned long	ord;
	char			*hex;
	
	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		ord = 1;
		j = i;
		while (j > 0)
		{
			ord *= 16;
			j--;
		}
		write(1, &hex[(addr / ord) % 16], 1);
		i--;
	}
}

void	*print_str(void *addr)
{
	int		i;
	char	*str;

	str = (char *)addr;
	i = 0;
	while (i < 16)
	{
		if (str[i] >= 32 && str[i] < 127)
			write(1, &str[i], 1);
		else if (str[i] == 0)
		{
			write(1, ".", 1);
			return ((void *)&str[i]);
		}
		else
			write(1, ".", 1);
		i++;
	}
	return ((void *)&str[i]);
}

void	print_in_hex(void *addr)
{
	char	*hex;
	char	*str;
	int		i;

	hex = "0123456789abcdef";
	str = (char *)addr;
	i = 0;
	while (i < 16)
	{
		if (i++ % 2 == 0)
			write(1, " ", 1);
		write(1, &hex[*str / 16], 1);
		write(1, &hex[*str % 16], 1);
		str++;
		if (*str == 0)
		{
			write(1, "00", 2);
			write(1, "     ", 5);
			return ;
		}
	}
	write(1, " ", 1);
	return ;
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char	*str = "Bonjour les aminches\t\n\tc  est fou\ttout ce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	int		len = strlen(str);

	void	*ptr = (void *) str;
	
	ft_print_memory(ptr, len);

	/*
    char    str[13] = "Hello world!";
	unsigned long address;

	address = (unsigned long)str;
	printf("printf: \n%p\n", str);
	printf("print_address:\n");
	print_address(address);
	printf("\n");
	printf("'%c' in hex: \n", str[1]);
	print_in_hex(str[1]);
	printf("\n");
	*/
}

/*
void	print_address(unsigned long addr)
{
	char	*hex;
	
	hex = "0123456789abcdef";
	if (addr == 0)
		return ;
	else
		print_address(addr / 16);
	write(1, &hex[addr % 16], 1);
}
*/
