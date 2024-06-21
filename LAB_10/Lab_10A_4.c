
//Print digits of given number.
#include<stdio.h>
void main(){
	int n,count=1;
	printf("Enter the number = ");
	scanf("%d",&n);//23456
	while(n>10){
		n=n/10;  
		count=count+1;
	}
	printf("Number of digits = %d",count);
}
