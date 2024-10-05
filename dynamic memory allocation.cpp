/*#include<stdio.h>
#include<stdlib.h>//standard library header file that contains dynamic memory functions
int main()
{
	int *ptr,l;
	printf("enter teh memory limit=");
	scanf("%d",&l);
	ptr=(int*)malloc(l*sizeof(int));//usage of the malloc function
	//dynamically memeory is allocated that means we can store data at run time
	printf("enter the values");
	for(int i=0;i<l;i++)
	{
		printf("a{%d}=",i);
		scanf("%d",&ptr[i]);
	}
	
	for(int i=0;i<l;i++)
	{
		printf("a{%d}=%d",i,ptr[i]);
		
	}
}*/


#include<stdio.h>
#include<stdlib.h>//standard library header file that contains dynamic memory functions
int main()
{
	int *ptr,l;
	printf("enter teh memory limit=");
	scanf("%d",&l);
	ptr=(/*this ia a void pointer*/int*)calloc(l,sizeof(int));//usage of the calloc function
	//dynamically memeory is allocated that means we can store data at run time
	printf("enter the values");
	for(int i=0;i<l;i++)//the "l" here takes palce stating that user use as  much heap memory as he can input;
	{
		printf("a{%d}=",i);
		scanf("%d",&ptr[i]);//acctualy we have already created dma for 'ptr';
	}

	for(int i=0;i<l;i++)
	{
		printf("\na{%d}=%d",i,ptr[i]);

	}




//#include<stdio.h>
//#include<stdlib.h>//standard library header file that contains dynamic memory functions
//int main()
//{
	//int *ptr,l;
	printf("enter teh new memory limit=");
	scanf("%d",&l);
	ptr=(int*)realloc(ptr,l*sizeof(int));//usage of the realloc function
	//dynamically memeory is allocated that means we can store data at run time
	printf("enter the values");
	for(int i=0;i<l;i++)
	{
		printf("a{%d}=",i);
		scanf("%d",&ptr[i]);
	}

	for(int i=0;i<l;i++)
	{
		printf("a{%d}=%d",i,ptr[i]);

	}
	free(ptr);//frees the used memory for next use
}


