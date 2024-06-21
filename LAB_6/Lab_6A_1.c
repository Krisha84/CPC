//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.
#include<stdio.h>
void main(){
	char choice;
	float a,b,add,sub,mul,div;
	printf("k = addition, l = subtraction, m = multiplication, n = division\n");
	printf("Enter the choice from above choices = ",choice);
	scanf("%c",&choice);
	printf("Enter the value of a = ");
	scanf("%f",&a);
	printf("Enter the value of b = ");
	scanf("%f",&b);
	if (choice=='k')
	{
	add=a+b;
	printf("Answer is : %f",add);
}
	else if (choice=='l')
	{
	sub=a-b;
	printf("Answer is : %f",sub);
	}
	else if (choice=='m')
	{
	mul=a*b;
	printf("Answer is : %f",mul);
	}
	else if (choice=='n')
	{
	div=a/b;
	printf("Answer is : %f",div);
	{
	if(b==0)
	{printf("Enter valid number");
	}
	}
	}
	else 
	{printf("Enter valid choice");
	}
}