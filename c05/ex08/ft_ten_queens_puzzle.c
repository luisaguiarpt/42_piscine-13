#include <unistd.h>

int	ft_ten_queens_puzzle(void)
{
	int	mtx[10][10];
	int	row;
	int	col;

	row = 0;
	col = 0;
	init_mtx(mtx);
}

int	create_mtx(int **mtx, int row, int col)
{
	
}

int	is_allowed(int **mtx, int row, int col)
{
	int	i;

	i = -1;
	while (++i < 10)
		if (mtx[row][i] == 1)
			return (0);
	i = -1;
	if (row + col < 10)
		while (++i < row + col + 1)
			if (mtx[row + col - i][i] == 1)
				return (0);
	if (row + col >= 10)
		while (++i < 19 - (row + col))
			if (mtx[9 - i][col + row - 9 + i] == 1)
				return (0);
	i = -1;
	if (col <= row)
		while (++i < 6 - (row - col))
			if (mtx[row - col + i][i] == 1)
				return (0);
	if (col > row)
		while (++i < col)
			if (mtx[i][col - row + i] == 1)
				return (0);
	return (1);
}

void	init_mtx(int **mtx)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			mtx[i][j] = 0;
			j++;
		}
		i++;
	}
}
