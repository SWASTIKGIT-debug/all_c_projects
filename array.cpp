#include<stdio.h>
int main1()
{
	int arr[2][3]={{9,3},{5,9,4}};
	for( int i=0;i<2;i++)
	{
		
		for( int j=0;j<3;j++)
	{
		
		printf("%d\t",arr[i][j]);
	}
	printf("\n");
	}
	
	
	return 0;
}

