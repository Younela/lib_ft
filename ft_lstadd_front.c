#include "libft.h"

/*
	Description : Adds the node ’new’ at the beginning of the list.
	
	lst:	The address of a pointer to the first link of a list.
	new:	The address of a pointer to the node to be added to the list.
*/

//Adds the element ’new’ at the beginning of the list.

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(new == NULL)
        return;
    if(lst == NULL)
    {
        *lst = new;
        return;
    }
    new ->next = *lst;
    *lst = new;
}