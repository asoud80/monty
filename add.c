#include "monty.h"

/**
 *
 * f_add - to Add a Top the two Elements Of The Stack
 *
 * @head: Stack Head
 *
 * @counter: Line NO.
 *
 * Return: none
*/

void f_add(stack_t **head, unsigned int counter)
{
	int len = 0, aux;
	stack_t *h;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
