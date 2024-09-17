#include "libft.h"

/*
    Deletes and frees the given node and every
    successor of that node, using the function ’del’
    and free(3).
    Finally, the pointer to the list must be set to
    NULL.

    lst: The address of a pointer to a node.
    del: The address of the function used to delete the content of the node.
*/

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *ptr;
    if(!*lst)
        return;
    while (*lst)
    {
        ptr = (*lst)->next;
        ft_lstdelone(lst,del);
        lst = ptr;
    }
    *lst = 0;
}