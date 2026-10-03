#include <assert.h>
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	to_upper(unsigned int i, char *c)
{
  i++;
  if (*c >= 'a' && *c <= 'z')
    *c -= 32;
}

int	main(void)
{
	char s[] = "Hello";
	ft_striteri(s, &to_upper);
	assert(s[0] == 'H');
	assert(s[1] == 'E');
	assert(s[2] == 'L');
	assert(s[3] == 'L');
	assert(s[4] == 'O');
	assert(s[5] == '\0');

	printf("\033[0;32m[PASS]\033[0m ft_striteri\n");
	return (0);
}
