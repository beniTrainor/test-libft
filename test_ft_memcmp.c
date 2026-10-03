#include <assert.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char *s1 = "ABC";	
	char *s2 = "AB";	
	const void *v1 = (const void *)s1;
	const void *v2 = (const void *)s2;

	assert(ft_memcmp(v1, v2, 2) == 0);
	assert(ft_memcmp(v1, v2, 3) == 67);

	printf("\033[0;32m[PASS]\033[0m ft_memcmp\n");
	return (0);
}
