
// 7B2 Check whether character is an alphabet or not using conditional operator
#include<stdio.h>
void main(){
	char c;
	printf("Enter the character = ");
	scanf("%c",&c);
	if (c>='A' && c<='Z' || c>='a' && c<='z'){
	printf("Given character is alphabet");
	}
	else {
	printf("Given character is not alphabet");	
	}
}
