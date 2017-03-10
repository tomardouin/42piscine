#include <stdio.h>

void	ft_print_alphabet(char letter)
{
	letter = 'a';

	while(letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
}

int	main(char letter)
{
	ft_print_alphabet(letter);
	return(0);
}
