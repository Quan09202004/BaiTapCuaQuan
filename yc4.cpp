#include<stdio.h>
#include<stdlib.h>
void nhap(int a[50],int n);
int main()
{
	int a[50];
	int n;
	
	FILE * fp;
	char path[50];
	printf("\nNhap duong dan: ");
	fflush(stdin);
	gets(path);
	nhap(a,n);
	fp=fopen(path,"wt");
	if(fp==NULL)
	{
		printf("\nLoi mo file!!!");
		exit(0);
	}
	else
	{
		//fprintf(fp,"so luong phan tu la %d",n);
		for (int i=0;i<n;i++)
		{
			fprintf(fp,"%3d",a[i]);
		}
		fclose(fp);
	}
}
void nhap(int a[50],int n)
{
	printf("\nNhap so phan tu: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nA[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
