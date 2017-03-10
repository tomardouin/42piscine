#include <stdio.h>

void	ft_print_numbers(int	nbr)
{
	nbr = '0';

	while(nbr <= '9')
		{
			putchar(nbr);
			nbr++;
		}
}

int	main(int nbr)
{
	ft_print_numbers(nbr);
	return(0);
}
