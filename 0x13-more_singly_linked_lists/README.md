0-print_listint.c
The function in this file prints all the elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes

1-listint_len.c
The function in this file returns the number of elements in a linked listint_t list.
Prototype: size_t listint_len(const listint_t *h);
Return: the number of elements

2-add_nodeint.c
The function in this file add a node to the begining.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: pointer to new element or NULL if it failed

3-add_nodeint_end.c
The function in this file adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: pointer to new element or NULL if it failed

4-free_listint.c
The function in this file free the linked lists
Prototype: void free_listint(listint_t *head);
Return : Always nothing

5-free_listint2.c
The function in this file free the linked lists and sets the head to NULL.
Prototype: void free_listint2(listint_t **head);
Return : Always nothing
