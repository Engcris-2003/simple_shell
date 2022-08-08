#include <stdio.h>
/**
 * main - prints all the arguments, without using ac
 * @ac: number of arguments
 * @av: arrays of strings
 * Return: 0
 */
int main(int __attribute__((unused))ac, char **av)
{
	int i = 0;

	for (i = 1; av[i] != NULL; i++)
	{
		printf("%s\n", av[i]);
	}
	printf("\n");
	return (0);
}
