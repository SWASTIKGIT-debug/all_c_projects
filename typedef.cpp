#include<stdio.h>
typedef struct student
{
	char first_letter;
	int number_id;
	float marks;
}st;

int main()
{

	/*data type*/ st/*variable*/ harry,swastik,ravi;
	harry.marks=12.5;
	swastik.first_letter='s';
	ravi.number_id=23;
	printf("%3f",harry.marks);
	printf("%\nc",swastik.first_letter);
	printf("%\nd",ravi.number_id);
	return 0;
}
