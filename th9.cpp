#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
void nhap(int a[20][20],int n,int m);
void xuat(int a[20][20],int n,int m);
void sx(int a[20][20],int n,int m);
void ktsnt(int a[20][20],int n,int m);
int main()
{
	int a[20][20];
	int n,m,key;
	while(true)
	{
		system("cls");
		printf("\n\n\t\t*********************************************************\n");
		printf("\t\t**        1. Nhap/Xuat mang 2 chieu                    **\n");
		printf("\t\t**        2. Sap xep mang tang dan                     **\n");
		printf("\t\t**        3. Tong cac phan tu la SNT chia het cho 3    **\n");
		printf("\t\t**        0. Thoat                                     **\n");
		printf("\t\t*********************************************************\n");
        printf("\n\n\t\t      AN PHIM CHON: ");
        scanf("%d",&key);
        switch(key)
        {
        	case 1:
        		nhap(a,n,m);
        		printf("\nBam phim bat ki de tiep tuc! ");
        		getch();
        		break;
        	case 2:
        		sx(a,n,m);
        		printf("\nBam phim bat ki de tiep tuc! ");
        		getch();
        		break;
        	case 3:
        		ktsnt(a,n,m);
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
void nhap(int a[20][20],int n,int m)
{
	printf("\n\tNhap so dong cua mang: ");
	scanf("%d",&n);
	printf("\n\tNhap so cot cua mang: ");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("\nNhap A[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\tMang vua nhap la: \n");
	xuat(a,n,m);
}
void xuat(int a[20][20],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("  %d  ",a[i][j]);
		}
		printf("\n");
	}
}
void sx(int a[20][20],int n,int m)
{
	printf("\n\tMang duoc sap xep tang dan la: \n");
	int i, j, k;
    for(i = 0;i<n;i++)
	{
        for(j = 0; j<m; j++)
		{
            for(k = j+1; k<m; k++)
			{
                if(a[i][j] > a[i][k])
				{
                    int temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
    xuat(a,n,m);
}
void ktsnt(int a[20][20],int n,int m)
{
	int tong=0;
	printf("\n\tTong cac SNT chia het cho 3 la: ");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int dem=1;
			for(int k=2;k<a[i][j];k++)
			{
				if(a[i][j]%k==0)
				dem++;
			}
			if(dem==2)
			{
				a[i][j]%3==0;
				tong=tong+a[i][j];
				printf("%d",tong);
			}	
		}
	}
}

































