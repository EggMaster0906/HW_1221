#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	FILE *f1, *f2;
	char ch;

	f1 = fopen("welcome.txt", "r");
	f2 = fopen("output.txt", "w");

	if (f1 == NULL || f2 == NULL)
	{
		printf("開啟檔案失敗!!");
	}
	else
	{
		while ((ch = getc(f1)) != EOF)
		{
			putc(ch, f2);
		}
		fclose(f1);
		fclose(f2);
		printf("檔案拷貝完成!!");
	}

	printf("\n");
	system("pause");
	return 0;
}