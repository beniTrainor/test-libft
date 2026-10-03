#include <assert.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	test_size_zero(void)
{
    char dest[] = "Hello";
    const char *src = "worXd";
    size_t n = 0;

    ft_memcpy(dest, src, n);

    assert(dest[0] == 'H');
    assert(dest[1] == 'e');
    assert(dest[2] == 'l');
    assert(dest[3] == 'l');
    assert(dest[4] == 'o');
}

void	test_destlen_lt_size(void)
{
    char dest[] = "Hello";
    const char *src = "worXd";
    size_t n = 3;

    ft_memcpy(dest, src, n);

    assert(dest[0] == 'w');
    assert(dest[1] == 'o');
    assert(dest[2] == 'r');
    assert(dest[3] == 'l');
}

int main(void)
{
    test_size_zero();
    test_destlen_lt_size();

    printf("\033[0;32m[PASS]\033[0m ft_memcpy\n");
    return (0);
}
