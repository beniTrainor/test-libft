#include <assert.h>
#include <stdio.h>

int	ft_tolower(int c);

int	main(void)
{
	assert(ft_tolower('A') == 'a');
	assert(ft_tolower('z') == 'z');
	assert(ft_tolower('$') == '$');

	printf("\033[0;32m[PASS]\033[0m ft_tolower\n");
	return (0);
}
