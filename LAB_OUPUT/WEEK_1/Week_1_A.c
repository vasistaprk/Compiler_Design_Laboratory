/*Check if a given Strin gis Constant or Not*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char s[100];
	printf("Enter a String: ");
	gets(s);
	if(atoi(s))
		printf("Given string is a contant.\n");
	else
		printf("Given string is not a constant.\n");
}

