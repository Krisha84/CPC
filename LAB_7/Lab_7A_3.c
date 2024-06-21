
/*Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice using switch.*/
#include<stdio.h>
void main(){
	int n;
	float a,b,Ans;
	printf("Enter the value of a and b = ");
	scanf("%f %f",&a,&b);
	printf("Enter the choice from 1 to 4 = ");
	scanf("%d",&n);
	switch (n){
		case 1: Ans=a+b;
		printf("Addition : %f",Ans);
		break;
		case 2: Ans=a-b;
		printf("Subtraction : %f",Ans);
		break;
		case 3: Ans=a*b;
		printf("Multiplication : %f",Ans);
		break;
		case 4: Ans=a/b;
		printf("Division : %f",Ans);
		break;
		default : printf("Enter valid choice.");
		break;
	}
}
