#include "libft.h"
#include <assert.h>
#include <stdio.h>

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("hello");
	assert(((char *)lst->content)[0] == 'h');
	assert(((char *)lst->content)[1] == 'e');
	assert(((char *)lst->content)[2] == 'l');
	assert(((char *)lst->content)[3] == 'l');
	assert(((char *)lst->content)[4] == 'o');
	assert(((char *)lst->content)[5] == '\0');
	assert(lst->next == NULL);

	free(lst);

	printf("\033[0;32m[PASS]\033[0m ft_lstnew\n");
	return (0);
}
