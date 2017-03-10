void	ft_print_reverse_alphabet(char letter)
{
	letter = 'z';

	while(letter >= 'a')
		{
			putchar(letter);
			letter--;
		}
}
