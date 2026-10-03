#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size);

int	main(void)
{
    void *m = ft_calloc(2, 3);
    assert(((char *)m)[0] == '\0');
    assert(((char *)m)[1] == '\0');
    assert(((char *)m)[5] == '\0');
    free(m);

    printf("\033[0;32m[PASS]\033[0m ft_calloc\n");
    return (0);
}
