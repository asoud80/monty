#include "monty.h"

/**
 * f_pstr - to Print The str that will Start at Top Of Stack,
 *
 * Followed New.
 *
 * @head: Stack Head.
 *
 * @counter: Line No.
 *
 * Return: None Return
*/

void f_pstr(stack_t **head, unsigned int counter)
{
	(void)counter;
	stack_t *h;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
