#include "libft.h"

/*
	Description : Returns the last node of the list.

	lst:	The beginning of the list.
*/


t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next) //while ((lst->next) != NULL)
		lst = lst->next;
	return (lst);
}
/*
t_list *ft_lstlast(t_list *lst)
{
    int i;
    int j;
    if (!lst)
        return NULL;
    t_list *ptr;

    i = ft_lstsize(lst);
    ptr = lst;

    while (j < i)
    {
        ptr = ptr ->next;
        j++;
    }
    return (ptr);
}
*/