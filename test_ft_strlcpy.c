#include <assert.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t siz);

int	main(void)
{
	char dst[] = "Hello";
	char src[] = "Worl";
	size_t siz = 3;
	size_t srcsize = ft_strlcpy(dst, src, siz);
	assert(dst[0] == 'W');
	assert(dst[1] == 'o');
	assert(dst[2] == '\0');
	assert(srcsize == 4);

	printf("\033[0;32m[PASS]\033[0m ft_strlcpy\n");
	return (0);
}
