
//Check whether the given number is odd or even using bitwise operator.
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of number = ");
	scanf("%d",&n);
	if (n&1==0)
	{printf("Print the given number is odd.\n");
	}
	else 
	{printf("Print the given number is even.\n");
	}
}
