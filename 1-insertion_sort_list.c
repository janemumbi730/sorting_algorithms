#include "sort.h"

/**
* swipper - changes two nodes
* @list: linked list
* @n1: first node
* @n2: second node
* Return: void
*/
void swipper(listint_t **list, listint_t *n1, listint_t *n2)
{
	listint_t *a, *b;

	if (n1 == NULL || n2 == NULL)
		return;

	a = n1->prev;
	b = n2->next;


	if (a)
		a->next = n2;

	if (b)
		b->prev = n1;

	n1->next = b;
	n1->prev = n2;
	n2->next = n1;
	n2->prev = a;

	if (a == NULL)
		*list = n2;
}

/**
* insertion_sort_list - sorts doubly linked list
* @list: list
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *curr;

	if (list == NULL || (*list)->next == NULL)
		return;

	curr = *list;
	while (curr)
	{
		prev = curr->prev;
		while (prev && prev->n > curr->n)
		{
			swipper(list, prev, curr);
			print_list(*list);
			prev = curr->prev;
		}
		curr = curr->next;
	}
}
