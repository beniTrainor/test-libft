#include <assert.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	assert(ft_isdigit('a') == 0);
	assert(ft_isdigit('A') == 0);
	assert(ft_isdigit('!') == 0);
	assert(ft_isdigit('3') == 1);
	assert(ft_isdigit('0') == 1);
	assert(ft_isdigit('9') == 1);

	printf("\033[0;32m[PASS]\033[0m ft_isdigit\n");
	return (0);
}
