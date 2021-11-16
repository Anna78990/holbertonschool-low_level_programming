0-print_listint.c
The function in this file prints all the elements of a listint_t linked list.
Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes

1-listint_len.c
The function in this file returns the number of elements in a linked listint_t linked list.
Prototype: size_t listint_len(const listint_t *h);
Return: the number of elements

2-add_nodeint.c
The function in this file add a node to the begining of a listint_t linked list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: pointer to new element or NULL if it failed

3-add_nodeint_end.c
The function in this file adds a new node at the end of a listint_t linked list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: pointer to new element or NULL if it failed

4-free_listint.c
The function in this file free a listint_t linked lists
Prototype: void free_listint(listint_t *head);
Return : Always nothing

5-free_listint2.c
The function in this file free a listint_t linked lists and sets the head to NULL.
Prototype: void free_listint2(listint_t **head);
Return : Always nothing

6-pop_listint.c 
The function in this file deletes the head node of a listint_t linked list and returns the head node’s data (n).
Prototype: int pop_listint(listint_t **head);
Return: the element to delete, if it is empty 0.

7-get_nodeint.c 
The function in this file returns the nth node of a listint_t linked list.
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
Return: the nth node, if it does not exist, return NULL.

