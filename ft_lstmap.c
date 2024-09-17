#include "libft.h"

/*
    Iterates the list ’lst’ and applies the function
    ’f’ on the content of each node. Creates a new
    list resulting of the successive applications of
    the function ’f’. The ’del’ function is used to
    delete the content of a node if needed.

    lst: The address of a pointer to a node.

    f: The address of the function used to iterate on the list.
    del: The address of the function used to delete the content of a node if needed
*/

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_node = NULL;

    if (!lst || !f)
        return (NULL);

    while (lst)
    {
        // Apply the function f to the content of the current node and create a new node
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            // If memory allocation fails, clear the entire new list and use del to free content
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        // Add the newly created node to the end of the new list
        ft_lstadd_back(&new_list, new_node);
        // Move to the next node in the original list
        lst = lst->next;
    }
    return (new_list);
}


/*t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_node = NULL;

    if (!lst || !f)
        return (NULL);

    while (lst)
    {
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}*/