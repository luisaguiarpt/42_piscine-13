#include <unistd.h>

void	put_queen(int mtx[10][10], int col, int *tot);
int		is_allowed(int mtx[10][10], int row, int col);
void	init_mtx(int mtx[10][10]);
void	print_mtx(int mtx[10][10]);

int	ft_ten_queens_puzzle(void)
{
	int	mtx[10][10];
	int	col;
	int	tot;
	int *ptr;

	tot = 0;
	ptr = &tot;
	col = 0;
	init_mtx(mtx);
	put_queen(mtx, col, ptr);
	return (tot);
}

void	print_mtx(int mtx[10][10])
{
	int	i;
	int	j;
	int	p;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (mtx[j][i] == 1)
			{
				p = j + '0';
				write(1, &p, 1);
				break ;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

void	put_queen(int mtx[10][10], int col, int *tot)
{
	int	row;

	row = 0;
	if (col == 10)
	{
		print_mtx(mtx);
		*tot += 1;
	}
	while (row < 10)
	{
		if (is_allowed(mtx, row, col))
		{
			mtx[row][col] = 1;
			put_queen(mtx, col + 1, tot);
			mtx[row][col] = 0;	
		}
		row++;
	}
}

int	is_allowed(int mtx[10][10], int row, int col)
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
		while (++i < 10 - (row - col))
			if (mtx[row - col + i][i] == 1)
				return (0);
	if (col > row)
		while (++i < 10 - (col - row))
			if (mtx[i][col - row + i] == 1)
				return (0);
	return (1);
}

void	init_mtx(int mtx[10][10])
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			mtx[i][j] = 0;
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int tot = ft_ten_queens_puzzle();
	printf("Total solutions = %i\n", tot);
	return (0);
}
