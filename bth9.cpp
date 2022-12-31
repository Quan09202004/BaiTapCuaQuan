#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<stdlib.h>
int nhap(char s[50]);
int chuanhoa(char s[50]);
int xoa(char s[50],int vtx);
int xoakt(char s[50]);
int main()
{
	char s[50];
	int key;
	while(true)
	{
		system("cls");
		printf("\n\n\t\t*********************************************************\n");
		printf("\t\t**        1. Nhap/Chuan hoa chuoi S                    **\n");
		printf("\t\t**        2. Dem tu co trong chuoi S                   **\n");
		printf("\t\t**        0. Thoat                                     **\n");
		printf("\t\t*********************************************************\n");
        printf("\n\n\t\t      AN PHIM CHON: ");
        scanf("%d",&key);
        switch(key)
        {
        	case 1:
        		nhap(s);
        		printf("\nBam phim bat ki de tiep tuc! ");
        		getch();
        		break;
        	case 2:
        		printf("\nBam phim bat ki de tiep tuc! ");
        		getch();
        		break;
        	case 0:
        		exit(1);
        		default:
                printf("\nKhong co chuc nang nay! ");
        		printf("\nBam phim bat ki de tiep tuc! ");
				getch();
        		break;	
        }
    }    
}
int nhap(char s[50])
{
	printf("\nNhap chuoi: ");
	gets(s);
	scanf("%s",&s);
	chuanhoa(s);
	printf("\nChuoi chuan hoa: ");

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
		if(s[i]==' '&&s[i+1]==' ')
		s[i+1]=s[i+1]-32;
	}
}






























