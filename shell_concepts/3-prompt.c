#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints $
 * Return: 0
 */
int main(void)
{
	char *buffer;
	size_t n;
	ssize_t num_read;

	buffer = malloc(sizeof(size_t) * n);
	while(1)
	{
		printf("$");
		num_read = getline(&buffer, &n, stdin);

	}
}
