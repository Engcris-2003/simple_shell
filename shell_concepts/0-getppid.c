#include <stdio.h>
#include <unistd.h>
/**
 * main - PID
 * Return: 0
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("the process ID: %u\n", my_pid);
	my_pid = getppid();
	printf("the parent process ID: %u\n", my_pid);
	return (0);
}
