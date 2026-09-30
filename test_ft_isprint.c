
#include <assert.h>
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	assert(ft_isprint('w') == 1);
	assert(ft_isprint('.') == 1);
	assert(ft_isprint('~') == 1);
	assert(ft_isprint(' ') == 1);
	assert(ft_isprint('\x7F') == 0);

	printf("\033[0;32m[PASS]\033[0m ft_isprint\n");
	return (0);
}
