
//Print the Fibonacci Series
//0,1,1,2,3,5,8,13
#include<stdio.h>
void main(){
	int i=0,n,a=0,b=1,c;
	printf("Enter the number = ");
	scanf("%d",&n);
	printf("0,1,");
	for(i=3;i<=n;i++){
	c=a+b;
	printf("%d,",c);
	a=b;
	b=c;
	}
}
