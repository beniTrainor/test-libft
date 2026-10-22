#include "libft.h"
#include <assert.h>
#include <stdio.h>

void	test_destlen_gte_size(void)
{
    char dst[20] = "Hello world";
    const char *src = "XYZ";

    assert(ft_strlcat(dst, src, 12) == 14);
    assert(!strcmp(dst, "Hello world"));
}

void	test_destlen_lt_size(void)
{
    char dst[] = "Hello world";
    const char *src = "XYZ";

    assert(ft_strlcat(dst, src, 12) == 14);
    assert(!strcmp(dst, "Hello world"));
}

void	test_4(void)
{
    char dest[30];
    char *src = "AAAAAAAAA";
    memset(dest, 0, 30);
    dest[0] = 'B';
    /* 2 */
    ft_strlcat(dest, src, 0);
    memset(dest, 'B', 4);
    /* 3 */
    ft_strlcat(dest, src, 3);
    /* 4 */
    size_t ret = ft_strlcat(dest, src, 6);
    assert(ret == 13 && !strcmp(dest, "BBBBA"));
}

void	test_15(void)
{
  /* 15 */

    char dest[30];
    memset(dest, 0, 30);
    assert(ft_strlcat(dest, "123", 3) == 3);
    assert(!strcmp(dest, "12"));

}

int	main(void)
{
	test_destlen_lt_size();
	test_destlen_gte_size();
	test_15();
	test_4();

	printf("\033[0;32m[PASS]\033[0m ft_strlcat\n");
	return (0);
}
