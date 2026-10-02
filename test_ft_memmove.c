#include <assert.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

void	test_non_overlapping(void)
{
    char s1[] = "Hello";     
    void *v1 = (void *)s1;
    char *s2 = "ABCDE";
    const void *v2 = (const void*)s2;
    size_t n = 2;

    ft_memmove(v1, v2, n);
    assert(((char *)v1)[0] == 'A');
    assert(((char *)v1)[1] == 'B');
}

void	test_overlapping_within_same_array(void)
{
    char s[] = "Hello";
    ft_memmove(s + 1, s, 4);

    assert(s[0] == 'H');
    assert(s[1] == 'H');
    assert(s[2] == 'e');
    assert(s[3] == 'l');
}

int main(void)
{
    test_overlapping_within_same_array();
    test_non_overlapping(); 
    printf("\033[0;32m[PASS]\033[0m ft_memmove\n");
    return (0);
}
