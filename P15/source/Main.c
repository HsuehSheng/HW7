#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{

	FILE *fptr1, *fptr2;
	char ch;
	fptr1 = fopen("welcome.txt", "r");
	fptr2 = fopen("output.txt", "w");
	if ((fptr1 != NULL) && (fptr2 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("ÀÉ®×«þ¨©§¹¦¨!!\n");
	}
	else
		printf("file opened failed!!\n");
	system("pause");
	return 0;
}