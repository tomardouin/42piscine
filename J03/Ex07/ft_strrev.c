char	*ft_strrev(char	*str)
{
	int	j;
	char	*strrev;

	j = '0';
	strrev = str;
	while(strrev[j] != '\0')
		j++;
	while(str[j] != '1')
		{
			putchar(str[j]);
			j--;
		}
	return(str);
}
