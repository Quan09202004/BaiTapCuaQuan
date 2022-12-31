#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<stdlib.h>
int chuanhoa(char s[50]);
int xoa(char s[50],int vtx);
int xoakt(char s[50]);
int main()
{
	char s[50];
	printf("\nNhap chuoi: ");
	gets(s);
	chuanhoa(s);
	printf("\nChuoi chuan hoa: ");
	puts(s);
}
int xoa(char s[50],int vtx)
{
	int n=strlen(s);
	for(int i=vtx;i<n;i++)
	s[i]=s[i+1];
	s[n-1]='\0';
}
int xoakt(char s[50])
{
	for(int i=0;i<strlen(s);i++)
	if(s[i]==' '&&s[i+1]==' ')
	{
		xoa(s,i);
		i--;
	}
	if(s[0]==' ')
	xoa(s,0);
	if(s[strlen(s)-1]==' ')
	xoa(s,strlen(s)-1);
}
int chuanhoa(char s[50])
{
	int i=0;
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' '&&s[i+1]!=' ')
		s[i+1]=s[i+1]-32;
	}
}
