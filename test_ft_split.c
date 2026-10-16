#include "libft.h"
#include <assert.h>
#include <stdio.h>

int	main(void)
{
	char **s1 = ft_split("AB XY", ' ');
	assert(s1[0][0] == 'A');
	assert(s1[0][1] == 'B');
	assert(s1[0][2] == '\0');

	assert(s1[1][0] == 'X');
	assert(s1[1][1] == 'Y');
	assert(s1[1][2] == '\0');
	assert(s1[2] == NULL);

	free(s1);

	char **s2 = ft_split("AB,,XY", ',');
	assert(s2[0][0] == 'A');
	assert(s2[0][1] == 'B');
	assert(s2[0][2] == '\0');

	assert(s2[1][0] == 'X');
	assert(s2[1][1] == 'Y');
	assert(s2[1][2] == '\0');
	assert(s2[2] == NULL);

	free(s2);

	char **s3 = ft_split("", ' ');
	assert(s3[0] == NULL);

	free(s3);

	char **s4 = ft_split("   ", ' ');
	assert(s4[0] == NULL);

	free(s4);

	char **s5 = ft_split(",AB,", ',');
	assert(s5[0][0] == 'A');
	assert(s5[0][1] == 'B');
	assert(s5[0][2] == '\0');

	char **s6 = ft_split("AB", ',');
	assert(s6[0][0] == 'A');
	assert(s6[0][1] == 'B');
	assert(s6[0][2] == '\0');
	assert(s6[1] == NULL);

	printf("\033[0;32m[PASS]\033[0m ft_split\n");
	return (0);
}
