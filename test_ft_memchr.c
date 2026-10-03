#include <assert.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

void	test_char_found(void)
{
	char *s = "Hello world";
	void *v = (void *)s;
	size_t n = 5;
	int c = 'l';

	void *r = ft_memchr(v, c, n);
	assert(r == (void *)&s[2]);
}

void	test_char_not_found(void)
{
	char *s = "Hello world";
	void *v = (void *)s;
	size_t n = 5;
	int c = 'z';

	void *r = ft_memchr(v, c, n);
	assert(r == NULL);
}

int	main(void)
{
	test_char_found();
	test_char_not_found();
	printf("\033[0;32m[PASS]\033[0m ft_memchr\n");
	return (0);
}
