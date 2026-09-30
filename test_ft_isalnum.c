#include <assert.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	assert(ft_isalnum('a') == 1);
	assert(ft_isalnum('A') == 1);
	assert(ft_isalnum('!') == 0);
	assert(ft_isalnum('3') == 1);
	assert(ft_isalnum('Z') == 1);

	printf("\033[0;32m[PASS]\033[0m ft_isalnum\n");
	return (0);
}
