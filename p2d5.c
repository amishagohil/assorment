#include<stdio.h>

main()
{
	int arr[100][100],tp[100][100];
	int r,c,i,j;
	
	printf("enter row array =");
	scanf("%d",&r);
	printf("\nenter column array =");
	scanf("%d",&c);
	
	printf("\nenter matrix elements =\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("arr[%d][%d] =",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("matrix element =\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",arr[i][j]);
			if(j==c-1);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			tp[j][i]=arr[i][j];
		}
	}
	printf("transpose of matrix element =\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",tp[i][j]);
			if(j==r-1);
		}
		printf("\n");
	}
}
