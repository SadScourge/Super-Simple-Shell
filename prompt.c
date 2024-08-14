#include <stdio.h>
#include <stdlib.h>

/**
 * main - aaa
 * Return: aaa
 */
int main(void)
{
	size_t n = 0;
	char *buf = NULL;

	buf = malloc(sizeof(char) * n);
	printf("$ ");
	getline(&buf, &n, stdin);
	printf("%s", buf);

	free(buf);

	return (0);
}
