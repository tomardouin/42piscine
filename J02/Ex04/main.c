#include <stdio.h>

void	ft_print_comb(void)
{
	int	nbr1;
	int	nbr2;
	int	nbr3;

	nbr1 = '0';
	nbr2 = '1';
	nbr3 = '2';
	while(nbr3 != nbr2 && nbr3 != nbr1)
		{
			putchar(nbr1);
			putchar(nbr2);
			putchar(nbr3);
			putchar(',');
			putchar(' ');
			nbr3++;
			if(nbr3 == '9')
				{
					nbr2++;
					nbr3 = nbr2++;
				}
			if(nbr2 == '8' && nbr3 == '9')
				nbr1++;
		}
	putchar('\n');
}

int	main(int nbr3)
{
	ft_print_comb();
	return(0);
}
