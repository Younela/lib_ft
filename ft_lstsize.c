#include "libft.h"

/*
	Description : Counts the number of nodes in a list.

	lst:	The beginning of the list.
*/


int ft_lstsize(t_list *lst)
{
    int count;
    count = 0;
    // if(lst == NULL)
    //     return;
    
    t_list *ptr;
    ptr = lst;
    while (ptr != NULL)
    {
        ptr = ptr ->next;
        count++;
    }
    return (count);
}