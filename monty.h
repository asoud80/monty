#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <ctype.h>
#include <string.h>

/**
 * struct stack_s - Doubly_Linked_List Representation Of Stack (Or queue)
 *
 * @n: Int
 *
 * @prev: it will Points To Previous Element Of Stack (Or queue)
 *
 * @next: it will Points To Next Element Of Stack (Or queue)
 * Description: Doubly_Linked_List Node Structure.
 *
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s
{
	struct stack_s *next;
	struct stack_s *prev;
	int n;
} stack_t;

/**
 * struct bus_s - the Variables - Args, File, Line Content.
 *
 * @arg: Value.
 *
 * @file: it will Pointer To monty File.
 *
 * @content: Line Content.
 *
 * @lifi: Flag Change stack <-> queue.
 *
 * Description: to Carry out Values into a Program
 */

typedef struct bus_s
{
	int lifi;
	FILE *file;
	char *arg;
	char *content;
}  bus_t;
extern bus_t bus;


/**
 * struct instruction_s - the OPcode & Its Function
 *
 * @opcode: OPcode.
 *
 * @f: the Function that Handle OPcode
 * Description: OPcode & Its Function
 *
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
#endif
