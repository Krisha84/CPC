
//Marks of five subjects.
#include<stdio.h>
void main(){
	int a,b,c,d,e;
	float per;
	printf("Enter the marks of five subjects :");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	per=(a+b+c+d+e)/(float)5;
	if (per<=35)
	{
		printf("Fail");
	}
	else if (per>=36 && per<=45)
	{
		printf("Pass Class");
	}
	else if (per>=46 && per>=60)
	{
		printf("Second Class");
	}
	else if (per>=61 && per<=70)
	{
		printf("First Class");
	}
	else if (per>70 && per<=100)
	{
		printf("Distinction");
	}
}
