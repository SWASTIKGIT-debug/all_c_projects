#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *ptr=NULL;//declaring a pointer to null is a good practice;
	char string[34];
	ptr=fopen("text2.txt"/*file name to be open*/,"a+"/*file mode tobe in open*/);
	//fscanf(ptr,"%s",string);//inputs the content at last to the space of the file in the string variable;
	//printf("%s",string);
	//char sentence[64]="i am swastik";
	//char c=fgetc(ptr);//reads a single charecter
	//fgets(string/*the declared array*/,5/*the charecters to read*/,ptr);
	//reads a string
	//ptr=fopen("text2.txt"/*file name to be open*/,"r"/*file mode tobe in open*/);
	//fprintf(ptr,"%s",sentence);//inputs the content at last to the space of the sentence variable in the file;
	//printf("\n%c",c);
	//printf("\n%s",string);
	fputc('n',ptr);
	fputs("know your mind",ptr);
	fclose(ptr);//closes the opened file;
}

