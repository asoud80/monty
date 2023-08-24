#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - monty Code Interpreter.
*
* @argc: No. Of Argus.
*
* @argv: monty File Location.
*
* Return: for success 0.
*/

int main(int argc, char *argv[])
{
	FILE *file;
	char *content;
	ssize_t read_line = 1;
	size_t size = 0;
	unsigned int counter = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		counter++;
		if (read_line > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
