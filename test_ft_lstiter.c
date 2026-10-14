#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}				t_list;

void	ft_lstiter(t_list *lst, void (*f)(void *));

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

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *cur;

    if (*lst == NULL)
    {
	*lst = new;
	return;
    }
    cur = *lst;
    while (cur->next != NULL)
	cur = cur->next;
    cur->next = new;
}

void	upper_char(void *content)
{
    if (*((char *) content) >= 'a' && *((char *) content) <= 'z')
	*((char *) content) = *((char *) content) - 32;
}

int	main(void)
{
	t_list *lst;
	t_list *new;

	lst = ft_lstnew(strdup("hello"));
	new = ft_lstnew(strdup("world"));
	ft_lstadd_back(&lst, new);

	ft_lstiter(lst, upper_char);

	assert(*((char *)lst->content) == 'H');
	assert(*((char *)new->content) == 'W');

	free(new);
	free(lst);

	printf("\033[0;32m[PASS]\033[0m ft_lstiter\n");
	return (0);
}
