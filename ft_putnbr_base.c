void ft_putchar(char c);

void ft_putnbr_base(int n)
{
if (n < 0)
{
        ft_putchar('-');
        n= -n;
}
if (n > 9)
{
        ft_putnbr_base(n / 2);
}
        ft_putchar_base(n % 2 + 48);
}
