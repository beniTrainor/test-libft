#include <assert.h>
#include <stdio.h>

int	ft_toupper(int c);

int	main(void)
{
	assert(ft_toupper('a') == 'A');
	assert(ft_toupper('Z') == 'Z');
	assert(ft_toupper('$') == '$');

	printf("\033[0;32m[PASS]\033[0m ft_toupper\n");
	return (0);
}
