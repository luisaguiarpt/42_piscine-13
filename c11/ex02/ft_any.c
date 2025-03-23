int	ft_any(char **tab, int(*f)(char*))
{
	
}

int	is_lower(char *str)
{
	while (*str)
		if (*str >= 'A' || *str <= 'Z')
			return (1);
	return (0);
}

int main(void)
{
	char **tab = {"hello", "im", "giid"};


}
