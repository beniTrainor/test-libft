#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}				t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);

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

int	main(void)
{
	t_list *lst;
	t_list *new;

	lst = ft_lstnew("hello");
	new = ft_lstnew("world");
	ft_lstadd_back(&lst, new);

	assert(((char *)lst->content)[0] == 'h');
	assert(lst->next == new);
	assert(new->next == NULL);

	free(lst);
	free(new);

	printf("\033[0;32m[PASS]\033[0m ft_lstadd_back\n");
	return (0);
}
