# C - More singly linked lists
More work on linked lists.
___
# More Info
Please use this data structure for this project:
```
/**
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Description: singly linked list node structure
*
*/
typedef struct listint_s
{
   int n;
   struct listint_s *next;
} listint_t;
```
___
## 0-print_listint.c
A function that prints all the elements of a `listint_t` list.
* Prototype: `size_t print_listint(const listint_t *h);`
* Return: the number of nodes
* You are allowed to use `printf`
## 1-listint\_len.c
A function that returns the number of elements in a linked `listint_t` list.
* Prototype: `size_t listint_len(const listint_t *h);`
## 2-add\_nodeint.c
A function that adds a new node at the beginning of a `listint_t` list.
* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed
## 3-add\_nodeint\_end.c
A function that adds a new node at the end of a `listint_t` list.
* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed
## 4-free\_listint.c
A function that frees a `listint_t` list.
* Prototype: `void free_listint(listint_t *head);`
## 5-free\_listint2.c
A function that frees a `listint_t` list.
* Prototype: `void free_listint2(listint_t **head);`
* The function sets the `head` to `NULL`
## 6-pop\_listint.c
A function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
* Prototype: `int pop_listint(listint_t **head);`
* if the linked list is empty return `0`
## 7-get\_nodeint.c
A function that returns the nth node of a `listint_t` linked list.
* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
* where index is the `index` of the node, starting at `0`
* if the node does not exist, return `NULL`
## 8-sum\_listint.c
A function that returns the sum of all the data (n) of a `listint_t` linked list.
* Prototype: `int sum_listint(listint_t *head);`
* if the list is empty, return `0`
## 9-insert\_nodeint.c
A function that inserts a new node at a given position.
* Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
* where `idx` is the index of the list where the new node should be added. Index starts at `0`
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
## 10-delete\_nodeint.c
A function that deletes the node at index `index` of a `listint_t` linked list.
* Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
* where index is the `index` of the node that should be deleted. Index starts at `0`
* Returns: `1` if it succeeded, `-1` if it failed
