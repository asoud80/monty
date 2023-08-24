#include "monty.h"

/**
* free_stack - it will Frees Doubly_Linked_List.
*
* @head: the Head Of Stack.
*/

void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
