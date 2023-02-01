#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE * fp;
	char filename[50], ch;
	printf("Filename: ");
	gets(filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("Loi roi!!!");
		exit(1);
	}
	while((ch=getche())!='\r')
	putc(ch,fp);
	fclose(fp);
	return 0;
}
