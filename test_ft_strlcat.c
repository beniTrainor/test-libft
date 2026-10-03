#include <assert.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

void	test_destlen_gte_size(void)
{
    char dst[] = "Hello world";
    const char *src = "XYZ";
    size_t size = 3;
    size_t retsize = ft_strlcat(dst, src, size);

    assert(ft_strlen(dst) == 11);
    assert(retsize == (size + ft_strlen(src)));
}

void	test_destlen_lt_size(void)
{
    char dst[] = "Hello world";
    const char *src = "XYZ";
    size_t size = 12;
    size_t retsize = ft_strlcat(dst, src, size);

    assert(ft_strlen(dst) == 12);
    assert(retsize == (11 + ft_strlen(src)));
}

int	main(void)
{

	printf("\033[0;32m[PASS]\033[0m ft_strlcat\n");
	return (0);
}
