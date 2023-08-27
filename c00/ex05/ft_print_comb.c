#include <unistd.h>

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	// print 3 numbers <done>
	// all 3 numbers must not be the same
	// it must be ascending order
	// 012, 013 ... 019, 023, ...789

	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
		write(1, "\n", 1);
	}
}

int main()
{
	ft_print_comb();

return (0);
}
