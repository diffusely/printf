#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "printf.h"

int main()
{
	char l_hex[17] = "0123456789abcdef";
	char u_hex[17] = "0123456789ABCDEF";

	int number = -1235;

	printf("%X\n\n", number);
	int index;

	ft_puthex(number, u_hex);
	write(1, "\n", 1);
}
