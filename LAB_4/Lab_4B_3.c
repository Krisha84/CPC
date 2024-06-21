#include<stdio.h>
void main(){
	float f,c;
	printf("Enter the fahrenheit temperature,F = ");
	scanf("%f",&f);
	c=((f-32)*5)/9;
	printf("%f",c);
}
