#include <assert.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main(void)
{
	char	*s1 = ft_strnstr("world", "wo", 2);
	assert(s1[0] == 'w');
	assert(s1[1] == 'o');
	assert(s1[2] == 'r');

	char	*s2 = ft_strnstr("world", "wo", 3);
	assert(s2[0] == 'w');
	assert(s2[1] == 'o');
	assert(s2[2] == 'r');

	char	*s3 = ft_strnstr("Hello world", "H", 0);
	assert(s3 == NULL);

	char	*s4 = ft_strnstr("Foo Bar Baz", "Bar", 4);
	assert(s4 == NULL);

	char	*s5 = ft_strnstr("Foo Bar Baz", "Bar", 8);
	assert(s5[0] == 'B');
	assert(s5[1] == 'a');
	assert(s5[2] == 'r');

	printf("\033[0;32m[PASS]\033[0m ft_strnstr\n");
	return (0);
}
