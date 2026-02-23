void ft_putchar(char c);
int ft_strlen(char *str);

void ft_putnbr_base(int n, char *base)
{
int size = ft_strlen(base);

if (n < 0)
{
        ft_putchar('-');
        n= -n;
}
if (n >= size)
{
        ft_putnbr_base(n / size, base);
}
        ft_putchar(base [n % size]);
}
