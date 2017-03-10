#include <stdio.h>

void	ft_print_reverse_alphabet(char letter)
{
	letter = 'z';

	while(letter >= 'a')
		{
			putchar(letter);
			letter--;
		}
}

int	main(char letter)
{
	ft_print_reverse_alphabet(letter);
	return(0);
}
