void ft_putchar(char c);
int ft_strlen(char *str);

void ft_putstr_reverse(char *str)
{
int i;
i= ft_strlen(str);
i--;
while (i >= 0)
{
	ft_putchar(str[i]);
	i--;
}
	ft_putchar('\n');
}
