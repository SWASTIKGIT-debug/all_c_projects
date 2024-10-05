#include<stdio.h>
int main()
{
	int a=34;
    float b=3.5;
    void *ptr;
    ptr=&b;
    printf("%f",*((float*)ptr));
	ptr=&a;
	printf("\n%d",*((int*)ptr));
}
