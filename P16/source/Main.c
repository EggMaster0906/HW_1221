#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ENTER 13
#define MAX 80

int main(void)
{
	FILE *f;
	char str[MAX], ch;
	int i = 0;

	f = fopen("output.txt", "w");
	
	printf("�п�J�r��A��ENTER�䵲����J:\n");
	while ((ch = getche()) != ENTER && i < MAX)
	{
		str[i++] = ch;
	}
	putc('\n', f);
	fwrite(str, sizeof(char), i, f);
	fclose(f);
	printf("\n�ɮת��[����!!\n");

	printf("\n");
	system("pause");
	return 0;
}