#include<stdio.h>
#include<stdlib.h>
int* function()
{
	int a,b,sum;
	a=34;
	b=87;
	sum=a+b;//it is an local variable
	return sum;//it is now a dangling pointer;
}

int main()
{
	int *pa=(int*)malloc(7*sizeof(int));
	ptr[30]=66;
	free(ptr);//it is now a dangling pointer
	int *dang=function();//it is now a dangling pointer;
	int *dangling;
	{
		int a=7;
		dangling=&a;
	}//a is now out of scope so dangling is now a dangling pointern
	return 0;
}
