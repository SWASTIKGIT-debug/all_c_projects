#include<stdio.h>
struct driver
{
	char name[30];
	char d_l[30];
	char route[50];
	int kilometers;
};
int main()
{
	struct driver person_1,person_2,person_3;
	printf("enter the name of the 1st driver=");
	scanf("%s",&person_1.name);
	printf("enter the driving licsence of the 1st driver=");
	scanf("%s",&person_1.d_l);
	printf("enter the route of the 1st driver=");
	scanf("%s",&person_1.route);
	printf("enter the kilometers of the 1st driver=");
	scanf("%d",&person_1.kilometers);
	printf("%s",person_1.name);
	printf("%s",person_1.d_l);
	printf("%s",person_1.route);
	printf("%d",person_1.kilometers);
}
