#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}				t_list;

void	ft_lstclear(t_list **lst, void (*del)(void *));

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

void	ft_del(void *content)
{
    if (content != NULL)
	free(content);
}

int	main(void)
{
	t_list *lst;
	t_list *new;

	lst = ft_lstnew(strdup("hello"));
	new = ft_lstnew(strdup("world"));
	lst->next = new;

	ft_lstclear(&lst, ft_del);


	printf("\033[0;32m[PASS]\033[0m ft_lstclear\n");
	return (0);
}
