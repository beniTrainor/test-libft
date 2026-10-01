#include <assert.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	char	*s1 = "Hello";
	int		c1 = 'l';
	char	*e1 = &s1[2];
	char	*r1 = ft_strchr(s1, c1);
	assert(e1 == r1);

	char	*s2 = "Hello";
	int		c2 = 'l';
	char	*e2 = &s2[3];
	char	*r2 = ft_strchr(s2, c2);
	assert(e2 != r2);

	printf("\033[0;32m[PASS]\033[0m ft_strchr\n");
	return (0);
}
