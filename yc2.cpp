#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE * fp;
	char filename[50], ch;
	printf("Filename: ");
	gets(filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("Khong the mo!!!");
		exit(1);
	}
	while((ch=getc(fp))!=EOF)
	printf("%c",ch);
	fclose(fp);
	return 0;
}
