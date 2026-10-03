#include <assert.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	assert(ft_strncmp("", "A", 1) == -65);
	assert(ft_strncmp("AB", "ABC", 0) == 0);
	assert(ft_strncmp("AB", "ABC", 2) == 0);
	assert(ft_strncmp("ABC", "AB", 3) == 67);
	assert(ft_strncmp("ABA", "ABZ", 3) == -25);
	assert(ft_strncmp("\201", "A", 1) == 64);

	printf("\033[0;32m[PASS]\033[0m ft_strncmp\n");
	return (0);
}
