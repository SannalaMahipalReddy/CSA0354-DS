#include<stdio.h>
int main()
{
	int i,j,k,r,c,a[10][10],b[10][10],mul[10][10];
	printf("Enter the number of rows:\n");
	scanf("%d",&r);
	printf("Enter the number of columns :\n");
	scanf("%d",&c);
	printf("Enter the elements of the matrix1:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the second matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Multiply of the matrices=\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++){
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]+=a[i][k]*b[j][k];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n\n");
	}
	return 0;	
}
