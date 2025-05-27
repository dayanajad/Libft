#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// === helper functions ===

void *duplicate(void *content)
{
    return strdup((char *)content); // returns a new copy of the content
}

void print_content(void *content)
{
    printf("  %s\n", (char *)content);
}

void del_content(void *content)
{
    free(content);
}

int main(void)
{
    // ======= ft_lstnew =======
    printf("Test case for: ft_lstnew\n");
    t_list *node1 = ft_lstnew(strdup("Node1"));
    printf("Expected: Node1 | Got: %s\n\n", (char *)node1->content);

    // ======= ft_lstadd_front =======
    printf("Test case for: ft_lstadd_front\n");
    t_list *head = ft_lstnew(strdup("Node2"));
    ft_lstadd_front(&head, node1);
    printf("Expected head content: Node1 | Got: %s\n\n", (char *)head->content);

    // ======= ft_lstadd_back =======
    printf("Test case for: ft_lstadd_back\n");
    t_list *node3 = ft_lstnew(strdup("Node3"));
    ft_lstadd_back(&head, node3);
    printf("Expected last node content: Node3 | Got: %s\n\n", (char *)ft_lstlast(head)->content);

    // ======= ft_lstsize =======
    printf("Test case for: ft_lstsize\n");
    printf("Expected size: 3 | Got: %d\n\n", ft_lstsize(head));

    // ======= ft_lstlast =======
    printf("Test case for: ft_lstlast\n");
    t_list *last = ft_lstlast(head);
    printf("Expected: Node3 | Got: %s\n\n", (char *)last->content);

    // ======= ft_lstdelone =======
	printf("Test case for: ft_lstdelone\n");
	t_list *temp = ft_lstnew(strdup("TempNode"));
	printf("Before deletion: %s\n", (char *)temp->content);
	ft_lstdelone(temp, del_content);
	printf("Expected: TempNode freed (no output here, just no segfault)\n\n");

    // ======= ft_lstiter =======
    printf("Test case for: ft_lstiter\n");
    printf("Expected output:\n  Node1\n  Node2\n  Node3\nGot:\n");
    ft_lstiter(head, print_content);
    printf("\n");

    // ======= ft_lstmap =======
    printf("Test case for: ft_lstmap\n");
    t_list *mapped = ft_lstmap(head, duplicate, del_content);
    printf("Expected mapped content:\n  Node1\n  Node2\n  Node3\nGot:\n");
    ft_lstiter(mapped, print_content);
    printf("\n");

    // ======= ft_lstclear =======
    printf("Test case for: ft_lstclear\n");
    ft_lstclear(&head, del_content);
    ft_lstclear(&mapped, del_content);
    printf("Expected: all nodes cleared (no output here, just no segfault)\n");

    return 0;
}
