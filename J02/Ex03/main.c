#include <stdio.h>

void	ft_is_negative(int	n)
{
	if (n >= 0)
		putchar('P');
	else
		putchar('N');
}

int	main(int	n)
{
	ft_is_negative(56);
	return(0);
}
