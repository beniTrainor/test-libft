#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}				t_list;

void	ft_lstdelone(t_list *lst, void (*del)(void *));

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

int	main(void)
{
	char	*s;
	t_list *lst;

	s = strdup("hello");
	lst = ft_lstnew(s);
	ft_lstdelone(lst, &del);

	printf("\033[0;32m[PASS]\033[0m ft_lstdelone\n");
	return (0);
}
