#include<stdio.h>
int main()
{
	char name[25];
	printf("enter your name");
	fgets(name,25,stdin);
	
	printf("hello %s",name);
	
	return 0;
}
