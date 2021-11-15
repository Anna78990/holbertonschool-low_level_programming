0-print_list.c
The function in this file  prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
If str is NULL, print [0] (nil)

1-list_len.c
The function in this file returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);
Return: the number of nodes

2-add_node.c
The function in this file add a node to the begining in list_t.
You set null pointer in the argument **head and string what you want to set in str.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: pointer to new element

3- add_node_end.c
The function in this file add a node to the end.
You set null pointer in the argument **head and string what you want to set in str.
Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: pointer to new element

4-free_list.c
The function in this file free the linked lists.
You set the pointer to the list in the argument.
Prototype: void free_list(list_t *head);
Return : Always nothing
