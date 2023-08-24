#include "monty.h"

/**
 * f_mod - to Computes Rest Of Division Of Second.
 *
 * top element Of Stack By The Top Element Of The Stack.
 *
 * @head: Stack Head.
 *
 * @counter: Line No.
 *
 * Return: None
*/

void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
