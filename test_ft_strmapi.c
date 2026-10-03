#include <assert.h>
#include <stdio.h>

char *ft_strmapi(const char *s, char (*f)(unsigned int, char));

char	plus_one(unsigned int i, char c)
{
    return ((char) c + 1 + i);
}

int	main(void)
{
	char *s = "Hello";
	char *r = ft_strmapi(s, &plus_one);
	assert(r[0] == 'I');
	assert(r[1] == 'g');
	assert(r[2] == 'o');
	assert(r[3] == 'p');
	assert(r[4] == 't');
	assert(r[5] == '\0');

	printf("\033[0;32m[PASS]\033[0m ft_strmapi\n");
	return (0);
}
