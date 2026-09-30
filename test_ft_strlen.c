#include <assert.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

int	main(void)
{
	assert(ft_strlen("") == 0);
	assert(ft_strlen("A") == 1);
	assert(ft_strlen("Az") == 2);
	assert(ft_strlen("-zX") == 3);

	printf("\033[0;32m[PASS]\033[0m ft_strlen\n");
	return (0);
}
