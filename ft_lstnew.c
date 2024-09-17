#include "libft.h"

/*
	Description : Allocates (with malloc(3)) and returns a new node. The member 
	variable ’content’ is initialized with the value of the parameter ’content’.
	The variable ’next’ is initialized to NULL.

	content: The content to create the node with.
*/

// Function to create a new node 

t_list *ft_lstnew(void *content)
{
    t_list	*new = (t_list *)malloc(sizeof(t_list));
    // struct s_list *new = (struct s_list *)malloc(sizeof(struct s_list));
    if(!new)
        return(NULL);
    new->content = content;
    new-> next = NULL;
    return (new);
}