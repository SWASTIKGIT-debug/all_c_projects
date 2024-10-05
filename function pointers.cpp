#include<stdio.h>
void welcome()
{
	printf("hello user");
}
int sum(int a,int b)
{
	return a+b;
}
int main()
{
	int (*ptr/*pointer that pointes the function*/)(int/*datatype of the variables to be input*/,int);
	ptr=&sum;//pointing the sum function;
	int dereference=(*ptr/*dereferecing the funtion pointer*/)(5,6);//inputs
	printf("%d",dereference);
	return 0;
}
