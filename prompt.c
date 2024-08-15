#include <stdio.h>
#include <stdlib.h>

/**
 * main - display the prompt in the console and
 *		print the input
 * Return: 0 or -1 if the function fail
 */
int main(void)
{
	size_t n = 0;
	ssize_t gl_return; /* return value of getline */
	char *buffer = NULL;

	while (1)
	{
		printf("(HBTN-shell)$ ");
		gl_return = getline(&buffer, &n, stdin);
		if (gl_return == -1)
		{
			/*fail case if getline failed, EOF reached or User use Ctrl+D*/
			printf("HBTN-shell is closing...\n");
			return (-1);
		}
		printf("%s", buffer);
	}

	free(buffer);

	return (0);
}
