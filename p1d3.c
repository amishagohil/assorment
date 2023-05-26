#include<stdio.h>

main()
{
	int arr[]= {12,45,78,98,78};
	int i,j,t=3,l;
	int len = sizeof(arr)/sizeof(arr[0]);
	
	printf("original array =\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<t;i++)
	{
		l=arr[len-1];
		for(j=len-1;j>0;j--)
		{
			arr[j] =arr[j-1];
		}
		arr[0]=l;
	}
	printf("\n");
	printf("right rotate an array =");
	for(i=0;i<len;i++)
	{
	     printf("%d ",arr[i]);
    }
}
