#include "libft.h"
#include <assert.h>
#include <stdio.h>

int	main(void)
{
	char *s1 = ft_substr("Hello world", 1, 4);
	assert(s1[0] == 'e');
	assert(s1[1] == 'l');
	assert(s1[2] == 'l');
	assert(s1[3] == 'o');
	assert(s1[4] == '\0');

	char *s2 = ft_substr("Hello", 4, 4);
	assert(s2[0] == 'o');
	assert(s2[1] == '\0');

	char *s3 = ft_substr("Hello", 5, 5);
	assert(s3[0] == '\0');

	char *s4 = ft_substr("Hello", 0, 2);
	assert(s4[0] == 'H');
	assert(s4[1] == 'e');
	assert(s4[2] == '\0');
	
	printf("\033[0;32m[PASS]\033[0m ft_substr\n");
	return (0);
}
