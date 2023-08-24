#include "monty.h"

/**
 * f_pall - to Print a Stack.
 *
 * @head: Stack Head.
 *
 * @counter: No Used.
 *
 * Return: None Return
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
