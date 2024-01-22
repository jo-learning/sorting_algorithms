#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current = *list;
	listint_t *next = NULL;
	listint_t **ptr = NULL;

	while (current != NULL)
	{
	*next = current->next;
	**ptr = &sorted;
	while (*ptr != NULL && (*ptr)->n < current->n)
	{
		ptr = &(*ptr)->next;
	}
	current->next = *ptr;
	*ptr = current;

	current = next;
	}

	*list = sorted;
}
