#include <stdio.h>
#include <unistd.h>

/**
 * main - give the parent process id
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_ppid;

	my_ppid = getppid();
	printf("%u\n", my_ppid);
	return (0);
}
