#include<stdio.h>
#include<conio.h>
#include<string.h>
long tgt(int n);
int main()
{
	int n;
	printf("\nNhap so nguyen duong N: ");
	scanf("%d",&n);
	printf("Giai thua cua %d la: %d\n",n,tgt(n));
}
long tgt(int n)
{
	if(n>0)
	{
		return n*tgt(n-1);
	}
	else
	{
		return 1;
	}
}
