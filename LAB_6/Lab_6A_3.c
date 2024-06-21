
//Check whether the entered character is upper case, lower case, digit or any special character.
#include<stdio.h>
void main(){
	char c;
	printf("Enter the value of character = ");
	scanf("%c",&c);
	if (c>='a' && c<='z')
	{
		printf("Given character is Lower Case");
	}
	else if (c>='A' && c<='Z')
	{
		printf("Given character is Upper Case");
	}
	else if (c>='0' && c<='9')
	{
		printf("Given character is digit");
	}
	else 
	{
		printf("Given character is special character");
	}
}
