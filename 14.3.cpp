#include<stdio.h>
#include<conio.h>
#include<string.h>
int tong(int n);
int main()
{
	int i,n,ttN;
	printf("Nhap 1 so nguyen duong: ");
	scanf("%d",&n);
	ttN=tong(n);
	printf("\nTong cac so nguyen duong tu 1 den %d la: %d",n,ttN);
	return (0);
}
int tong(int n)
{
	int tt;
	if(n==1)
	{
		return (1);
	}else
	{
		tt=n+tong(n-1);
	}
	return (tt);
}

