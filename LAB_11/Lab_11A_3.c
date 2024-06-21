
//Print multiplication table of a given number
#include<stdio.h>
void main (){
	int n,i,mul;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		mul=i*n;
		printf("%d*%d=%d\n",n,i,mul);
	}
}
