//printing 1 to 5 numbers using static variables.
#include<stdio.h>
int loop()//creting a function
{
	static int a=1;
	printf("the numbers are=%d",a);
	a++;
	return 0;
}
int main()
{
	int number=loop();
	number=loop();
	number=loop();
	number=loop();
	number=loop();
	//printf("the numbers are=%d",number);
	
	return 0;
}
