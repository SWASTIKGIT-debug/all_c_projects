#include<stdio.h>


/*int students(int array[10])
{
	for(int j=0;j<10;j++)
	{
		printf("sub[%d]=%d",j,array[j]);
	}
}*/


int main()
{
	int sub[10];
	printf("enter the subject values of all the students=");
	for(int i=0;i<10;i++)
	{
		printf("\nsub[%d]=",i);
		scanf("%d",&sub[i]);
	}
	printf("\n**all the subject values are**");
	//students(sub);
}

