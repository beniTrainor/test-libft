#include <assert.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
  char s1[] = "Hello";
  void *s = (void *)s1;
  size_t n = 3;
  ft_memset(s, 97, n);

  assert(((char *)s)[0] == 'a');
  assert(((char *)s)[1] == 'a');
  assert(((char *)s)[2] == 'a');
  assert(((char *)s)[3] == 'l');

	printf("\033[0;32m[PASS]\033[0m ft_memset\n");
	return (0);
}
