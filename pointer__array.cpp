#include<stdio.h>
int main()
{
	int a[]={1,2,3,4};
	//for position increasing;
	printf("%d",*&a[0]);
 	printf("\n%d",&a[1]);
	printf("\n%d",a);
	int *pa=a;
	printf("\n%p",pa);
	printf("\n%p",*pa);
	pa++;
	printf("\n%p",pa);
	printf("\n%p",*pa);
}
