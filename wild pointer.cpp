#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=55;
	int *pa;//this is now an wild pointer;
	*ptr=34;//this is now an wild pointer;
	
	ptr=&a;//it is now not a wild pointer;
	return 0;
}
