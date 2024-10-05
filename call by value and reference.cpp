//example of call by reference
#include<stdio.h>
int changing(int *pa,int *pb)
{
	*pa=*pa+*pb;
	*pb=*pa-*pb;
	return *pa;
	return *pb;
}
int main()
{
	int x=5,y=6;
	/*printf("enter the number 1=");
	scanf("%d",&x);
	printf("enter the number 1=");
	scanf("%d",&y);*/
	changing(&x,&y);
	printf("the value of x is=%d",x);
	printf("the value of x is=%d",y);
}
