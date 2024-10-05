#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *parr;
	int l;
	printf("enter the limt=");
	scanf("%d",&l);
	parr=(int*)calloc(l,sizeof(int));
	printf("\nenter the numbers=");
	for(int i=0;i<l;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&parr[i]);
	}
	
	printf("enter the limt again=");
	scanf("%d",&l);
	parr=(int*)realloc(parr,l*sizeof(int));
	printf("\nenter the numbers=");
	for(int i=0;i<l;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&parr[i]);
	}
	
	for(int j=0;j<l;j++)
	{
		printf("\narr[%d]=%d",j,parr[j]);
		
	}
	free(parr);
}
