0-print_listint.c
The function in this file prints all the elements of a listint_t linked list by the setting the pointer to the list
on the argument '*h'.
Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes

1-listint_len.c
The function in this file returns the number of elements in a linked listint_t linked list by the setting the
pointer to the list on the argument '*h'.
Prototype: size_t listint_len(const listint_t *h);
Return: the number of elements

2-add_nodeint.c
The function in this file add a node with the number of the argument 'n' to the begining of a listint_t linked list
by the setting the pointer to the list on the argument '**head'.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: pointer to new element or NULL if it failed

3-add_nodeint_end.c
The function in this file adds a new node with the number of the argument 'n' at the end of a listint_t linked list
by the setting the pointer to the list on the argument '**head'.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: pointer to new element or NULL if it failed

4-free_listint.c
The function in this file free a listint_t linked lists by the setting the pointer to the list on the argument 
'*head'.
Prototype: void free_listint(listint_t *head);
Return : Always nothing

5-free_listint2.c
The function in this file free a listint_t linked lists and sets the head to NULL by the setting the pointer to the
list n the argument '**head'.
Prototype: void free_listint2(listint_t **head);
Return : Always nothing

6-pop_listint.c 
The function in this file deletes the head node of a listint_t linked list and returns the head node’s data (n)
by the setting the pointer to the list on the argument '**head'.
Prototype: int pop_listint(listint_t **head);
Return: the element to delete, if it is empty 0.

7-get_nodeint.c 
The function in this file returns the nth node of a listint_t linked list by the setting the pointer to the list
on the argument '*head', and n of nth node in 'idx'.
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
Return: the nth node, if it does not exist, return NULL.

8-sum_listint.c
The function in this file returns the sum of all the data (n) of a listint_t linked list by the setting the pointer
to the list on the argument '*head'
Prototype: int sum_listint(listint_t *head);
Return: the sum of all the data, if it is empty, return NULL.

9-insert_nodeint.c
The function in this file inserts a new node at a given position by the setting the pointer to the list on the 
argument '*h', n of nth node ,which lead the new node, on'idx', umber in new element on 'n'
Return: pointer to new element, if it failed or it is not possible to add the new node at index return NULL.
