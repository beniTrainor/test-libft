#include <assert.h>
#include <stdio.h>

int ft_atoi(const char *nptr);

int	main(void)
{
	assert(ft_atoi("0") == 0);
	assert(ft_atoi("0123") == 123);
	assert(ft_atoi("123") == 123);
	assert(ft_atoi("-123") == -123);
	assert(ft_atoi("+123") == 123);

	assert(ft_atoi("2147483647") == 2147483647);
	assert(ft_atoi("-2147483648") == -2147483648);

	printf("\033[0;32m[PASS]\033[0m ft_atoi\n");
	return (0);
}
