#include<stdio.h>
void main(){
	int p,r,t;
	float i;
	printf("Enter the value, P = ");
	scanf("%d",&p);
	printf("Enter the value, R = ");
	scanf("%d",&r);
	printf("Enter the value, T = ");
	scanf("%d",&t);
	i=(p*r*t)/100.0;
	printf("Simple interest = %f",i);
}
