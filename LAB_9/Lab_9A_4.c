
//Find factorial of the given number
#include<stdio.h>
void main(){
	int i=1,n,mul=1;
	printf("Enter the number n = ");
	scanf("%d",&n);
	while(i<=n){
		mul=mul*i;
		i++;
	}
	printf("%d",mul);
}
