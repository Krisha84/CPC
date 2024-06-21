
//Print given number in reverse order
#include<stdio.h>
void main(){
	int n,i,rem,sum=0;
	printf("Enter the number = ");
	scanf("%d",&n);
	while (n!=0){  //7689
	rem=n%10; 
	sum=(sum*10)+rem;
	n=n/10;  //768
}
    printf("Reversed number = %d",sum);
}
