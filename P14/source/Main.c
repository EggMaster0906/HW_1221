#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n共有%d個字元", count);
	}
	else
	{
		printf("開啟檔案失敗!!");
	}

	printf("\n");
	system("pause");
	return 0;
}