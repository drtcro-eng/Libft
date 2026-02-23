#include "libft.h"

int main() {
	char *palabra = "caguento";
	char *palabra2 = "omfginutil";
	int longitud;

	longitud = ft_strlen(palabra);

	ft_putstr("La palabra tiene: ");
	ft_putnbr(longitud);
	ft_putstr("letras\n");
	ft_putstr_reverse(palabra);
	ft_putnbr(ft_strcmp(palabra, palabra2));
	ft_putchar('\n');
	ft_putnbr_base(255, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_hex_dump("DANIEL");
	ft_putchar('\n');
	return 0;
}
