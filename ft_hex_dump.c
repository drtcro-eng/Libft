void ft_putchar(char c);
void ft_putnbr_base(int n, char *base);

void ft_hex_dump(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		ft_putnbr_base((unsigned char)str[i], "0123456789ABCDEF");
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}
