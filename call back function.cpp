#include<stdio.h>
int sum(int a,int b)
{
	return a+b;
}
void greet_hello(int (*ptr)(int,int))
{
	printf("hello user");
	printf("the sum is=%d",ptr(5,7));
}

void goodmorning_hello(int (*ptr)(int,int))
{
	printf("gd mrng user");
	printf("the sum is=%d",ptr(5,7));
}
int main()
{
	int (*ptr)(int,int);
	ptr=&sum;
	greet_hello(ptr);
	goodmorning_hello(ptr);
}
