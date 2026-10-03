#include <assert.h>
#include <stdio.h>

char	*ft_strdup(const char *s);

int	main(void)
{
    char *s = "Hello";
    char *s2 = ft_strdup(s);

    assert(s2[0] == 'H');
    assert(s2[1] == 'e');
    assert(s2[2] == 'l');
    assert(s2[3] == 'l');
    assert(s2[4] == 'o');
    assert(s2[5] == '\0');

    free(s2);
    
    printf("\033[0;32m[PASS]\033[0m ft_strdup\n");
    return (0);
}
