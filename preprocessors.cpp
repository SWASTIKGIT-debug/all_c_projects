#include<stdio.h>
#include"array.cpp"//brings all content from the array file
#define PI 3.14//replaces all variables of pi to 3.14
#define sqare(x)x*x//can be treated as a function
int main()
{
	float var=PI;
	printf("%f",var);
	printf("\n%f",sqare(5)*PI);
	printf("\n%s",__FILE__);
	printf("\n%s",__TIME__);
	printf("\n%d",__LINE__);
	printf("\n%d",__STDC__);//tels if it is in ansi standard;
}
