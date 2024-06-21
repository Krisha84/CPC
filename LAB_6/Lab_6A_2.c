//Enter basic salary of an employee and gross salary.
#include<stdio.h>
void main(){
	float b,h,d,g;
	printf("Enter the basic salary =");
	scanf("%f",&b);
	if (b>=30000)
	{
		h=(b*0.30);
		d=(b*0.95);
		g=b+h+d;
		printf("Enter the value of Gross Salary = %f",g);
}
	else if(b>=20000)
	{
	    h=(b*0.25);
		d=(b*0.9);
		g=b+h+d;
		printf("Enter the value of Gross Salary = %f",g);
}
	else if(b>=10000)
	{
		h=(b*0.2);
		d=(b*0.8);
		g=b+h+d;
		printf("Enter the value of Gross Salary = %f",g);
	}
}