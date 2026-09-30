#include <assert.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	assert(ft_isascii('a') == 1);
	assert(ft_isascii('!') == 1);
	assert(ft_isascii('?') == 1);
	assert(ft_isascii('\x8F') == 0);
	assert(ft_isascii('\x8c') == 0);

	printf("\033[0;32m[PASS]\033[0m ft_isascii\n");
	return (0);
}
