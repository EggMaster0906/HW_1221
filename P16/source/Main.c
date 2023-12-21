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
	
	printf("請輸入字串，按ENTER鍵結束輸入:\n");
	while ((ch = getche()) != ENTER && i < MAX)
	{
		str[i++] = ch;
	}
	putc('\n', f);
	fwrite(str, sizeof(char), i, f);
	fclose(f);
	printf("\n檔案附加完成!!\n");

	printf("\n");
	system("pause");
	return 0;
}