0-print_list.c
This function prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
If str is NULL, print [0] (nil)

1-list_len.c
This function returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);
Return: the number of nodes

2-add_node.c
This function add a node to the begining in list_t.
You set null pointer in the argument **head and string what you want to set in str.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: pointer to new element

3-add_node_end.c
