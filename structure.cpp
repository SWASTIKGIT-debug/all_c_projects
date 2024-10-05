#include<stdio.h>
struct student
{
	char first_letter;
	int number_id;
	float marks;
};
struct/*data type*/ student/*variable group*/ harry,swastik,ravi;//global variable when it is declared just outside the varialble;
int main()
{
	
	harry.marks=12.5;
	swastik.first_letter='s';
	ravi.number_id=23;
	printf("%3f",harry.marks);
	printf("%\nc",swastik.first_letter);
	printf("%\nd",ravi.number_id);
	return 0;
}
