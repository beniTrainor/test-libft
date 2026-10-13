#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}				t_list;

unsigned int	ft_lstsize(t_list *lst);

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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list *lst1;
	t_list *lst2;
	t_list *lst3;

	lst1 = ft_lstnew("Foxtrot");
	lst2 = ft_lstnew("Charlie");
	lst3 = ft_lstnew("Uniform");
	ft_lstadd_front(&lst1, lst2);
	ft_lstadd_front(&lst1, lst3);

	assert(ft_lstsize(lst1) == 3);

    printf("\033[0;32m[PASS]\033[0m ft_lstsize\n");
    return (0);
}
