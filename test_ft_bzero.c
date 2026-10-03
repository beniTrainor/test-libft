#include <assert.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char s[] = "Hello";
	void *v = (void *)s;
	size_t n = 3;
	ft_bzero(v, n);

	assert(s[0] == '\0');
	assert(s[1] == '\0');
	assert(s[2] == '\0');

	printf("\033[0;32m[PASS]\033[0m ft_bzero\n");
	return (0);
}
