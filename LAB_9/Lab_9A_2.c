
//Print multiplication table of a given number
#include<stdio.h>
void main(){
	int i=1,n,mul;
	printf("Enter the number n = ");
	scanf("%d",&n);
	while(i<=10){
		mul=n*i;
		printf("%d*%d=%d\n",n,i,mul);
		i=i+1;
	}
}
