#include <unistd.h>

void	ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
		{
			write(1, &c, 1);
			c++;
		}
	write(1, "\n", 1);
}
int main()
{
	ft_print_alphabet();

return (0);
}
