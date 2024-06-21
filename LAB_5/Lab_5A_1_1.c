
//Swap the numbers with temp
#include<stdio.h>
void main(){
	int a,b,temp;
	printf("Enter the value of a and b = ");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("values of a=%d, b=%d after swapping:",a,b);
}
