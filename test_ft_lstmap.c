#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;

	return (lst);
}

void	del(void *content)
{
	free(content);
}

void	*addTwo(void *content)
{
	*(char *)content += 2;
	return (content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*map;

	lst = ft_lstnew(strdup("A"));
	ft_lstadd_back(&lst, ft_lstnew(strdup("B")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("C")));

	map = ft_lstmap(lst, addTwo, del);
	assert(*((char *)map->content) == 'C');
	assert(*((char *)map->next->content) == 'D');

	printf("\033[0;32m[PASS]\033[0m ft_lstmap\n");
	return (0);
}
