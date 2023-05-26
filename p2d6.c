#include<stdio.h>


main()
{
	int m=3,n=3,sum=0;
	int i,j;
	int matrix[3][3] = {{12,13,14},{14,13,12},{12,13,14}};
	
	if(m==n)
	{
		printf("\nenter matrix elements =\n");
	    for(i=0;i<m;i++)
	    {
		    for(j=0;j<n;j++)
		    {
			   printf("%d ",matrix[i][j]);
		    }
		    printf("\n");
	    }
	    for(i=0;i<m;i++)
    	{
		    sum= sum+matrix[i][i];
	    } 
	    printf("\ndiagonal elemant sum =%d\n",sum);
	}
	else
	{
		printf("\not square matrix\n");

	}
}
