
//Multiply and divide a number by 2 without using multiplication/division operator
#include<stdio.h>
void main (){
	int n,mul,div;
	printf("Enter the given number = ");
	scanf("%d",&n);
    mul=n<<1;
	div=n>>1;
	printf("Multiplication = %d, Division = %d", mul,div);
}
