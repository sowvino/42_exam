#include "ft_lstsize.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
    t_list *node ;
    int count;
    count  =0 ;
    node = begin_list;
    while (node != NULL)
    {
        count++;
        node = node ->next; 
    }
    return (count);
}

int main()
{
    t_list node3 = {NULL, NULL};
    t_list node2 = {NULL, &node3};
    t_list node1 = {NULL, &node2};
    t_list *head = &node1;

    int size = ft_list_size(head);
    printf("List size: %d\n", size);  // Output will be 3
    return 0;
}