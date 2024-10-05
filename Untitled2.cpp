#include<stdio.h>



int students(int array[10])
{
	for(int j=0;j<4;j++)
	{
		printf("\nsub[%d]=%d",j,array[j]);
		
	}
	array[3]=7;
}


int main()
{
	int sub[10];
	printf("enter the subject values of all the students=");
	for(int i=0;i<4;i++)
	{
		printf("\nsub[%d]=",i);
		scanf("%d",&sub[i]);
	}
	printf("\n**all the subject values are**");
	students(sub);
	printf("\n**all the subject values after changing are**");
	students(sub);
}



