int	is_match(char *hay, char nee)
{
	while (*hay)
	{
		if (*hay == nee)
			return (1);
		hay++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*hay = "poneyvif";
	char	nee = '9';

	printf("%i", is_match(hay, nee));
}
