#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 80

int main(void)
{
	FILE *f;
	char str[MAX];
	int bytes;
	f = fopen("output.txt", "r");

	while (!feof(f))
	{
		bytes = fread(str, sizeof(char), MAX - 1, f);
		str[bytes] = '\0';
		printf("%s\n", str);
	}

	fclose(f);

	printf("\n");
	system("pause");
	return 0;
}