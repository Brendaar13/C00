#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i[2];

	i[0] = -1;
	while (i[0] < 98)
	{
		i[0]++;
		i[1] = i[0];
		while (i[1] < 99)
		{
			i[1]++;
			ft_putchar((i[0] / 10) + 48);
			ft_putchar((i[0] % 10) + 48);
			ft_putchar(' ');
			ft_putchar((i[1] / 10) + 48);
			ft_putchar((i[1] % 10) + 48);
			if (i[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
