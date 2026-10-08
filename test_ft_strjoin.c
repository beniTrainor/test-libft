#include <assert.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);

void	test_join_two_strings()
{
	char *s1 = ft_strjoin("Hello ", "world");
	assert(ft_strlen(s1) == ft_strlen("Hello world"));
	assert(s1[11] == '\0');
}

void	test_empty_s1()
{
	char *s1 = ft_strjoin("", "world");
	assert(ft_strlen(s1) == ft_strlen("world"));
	assert(s1[5] == '\0');
}

int	main(void)
{
	test_join_two_strings();
	test_empty_s1();

	printf("\033[0;32m[PASS]\033[0m ft_strjoin\n");
	return (0);
}
