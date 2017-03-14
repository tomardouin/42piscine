void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
	return(str);
}
