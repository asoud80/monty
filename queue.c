#include "monty.h"

/**
 * f_queue - to Prints Top.
 *
 * @head: Stack Head.
 *
 * @counter: Line No.
 *
 * Return: none Return
*/

void f_queue(stack_t **head)
{
	(void)head;
	bus.lifi = 1;
}


/**
 * addqueue - to Add the Node To Tail Stack.
 *
 * @n: New Value.
 *
 * @head: the Head Of Stack.
 *
 * Return: None Return
*/

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
