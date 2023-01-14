# C - Doubly linked lists
Learning about doubly linked lists
___
# More Info
Please use this data structure for this project:
```
/**
* struct dlistint_s - doubly linked list
* @n: integer
* @prev: points to the previous node
* @next: points to the next node
*
* Description: doubly linked list node structure
*
*/
typedef struct dlistint_s
{
   int n;
   struct dlistint_s *prev;
   struct dlistint_s *next;
} dlistint_t;
```
___
## 0-print_dlistint.c
A function that prints all the elements of a `dlistint_t list`
* Prototype: `size_t print_dlistint(const dlistint_t *h);`
* Return: the number of nodes
## 1-dlistint\_len.c
A function that returns the number of elements in a linked `dlistint_t` list.
* Prototype: `size_t dlistint_len(const dlistint_t *h);`
## 2-add\_dnodeint.c
A function that adds a new node at the beginning of a `dlistint_t` list.
* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed
## 3-add\_dnodeint\_end.c
A function that adds a new node at the end of a `dlistint_t` list.
* Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed
## 4-free\_dlistint.c
A function that frees a `dlistint_t` list.
* Prototype: `void free_dlistint(dlistint_t *head);`
## 5-get\_dnodeint.c
A function that returns the nth node of a `dlistint_t` linked list.
* Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
* where `index` is the index of the node, starting from `0`
* if the node does not exist, return `NULL`
## 6-sum\_dlistint.c
A function that returns the sum of all the data (n) of a `dlistint_t` linked list.
* Prototype: `int sum_dlistint(dlistint_t *head);`
* if the list is empty, return `0`
## 7-insert\_dnodeint.c, 2-add\_dnodeint.c, 3-add\_dnodeint\_end.c
A function that inserts a new node at a given position.
* Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
* where `idx` is the index of the list where the new node should be added. Index starts at `0`
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL` <br>
Your files `2-add_dnodeint.c` and `3-add_dnodeint_end.c` will be compiled during the correction
## 8-delete\_dnodeint.c
A function that deletes the node at index `index` of a `dlistint_t` linked list.
* Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
* where `index` is the index of the node that should be deleted. Index starts at `0`
* Returns: `1` if it succeeded, `-1` if it failed

