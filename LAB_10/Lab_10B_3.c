
//palindrome for loop
#include<stdio.h>
void main(){
	int i,n,sum=0,rem,org;
	printf("Enter n = ");
	scanf("%d",&n);
	org=n;  //12321
	while(n!=0){
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	if(sum==org)
	{
		printf("Given number is palindrome.");
	}
	else
	{
		printf("Given number is not palindrome.");
	}
}
