#include <stdio.h>
#include <string.h>

int main(void)
{
	chat str[] = "separate this string";
	char delim [5] = " ";
	char *trunks;

	trunks = strtok(str, delim);
	
	while (trunks)
	{
		printf("%s\n", trunks);
		trunks = strtok(NULL, delim);
	}

	
}