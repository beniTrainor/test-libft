#include <assert.h>
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('A') == 1);
	assert(ft_isalpha('Z') == 1);
	assert(ft_isalpha('!') == 0);
	assert(ft_isalpha('3') == 0);

	printf("\033[0;32m[PASS]\033[0m ft_isalpha\n");
	return (0);
}
