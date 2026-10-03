#include <assert.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char	*s1 = "Hello";
	int	c1 = 'l';
	char	*e1 = &s1[3];
	char	*r1 = ft_strrchr(s1, c1);
	assert(e1 == r1);

	char	*s2 = "Hello";
	int	c2 = 'e';
	char	*e2 = &s2[1];
	char	*r2 = ft_strrchr(s2, c2);
	assert(e2 == r2);

	printf("\033[0;32m[PASS]\033[0m ft_strrchr\n");
	return (0);
}
