
//Input an integer and check the last digit of number is even or odd.
#include<stdio.h>
void main(){
	int n;
	printf("Enter the integer number = ");
	scanf("%d",&n);
	if (n%2==0)
	{
		printf("Given number has last digit : even");
	}
	else
	{
		printf("Given number has last digit ; odd");
	}
}
