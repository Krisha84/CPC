
//Check whether the given number is perfect or not
#include<stdio.h>
void main(){
	int n,i=1,sum=0;
	printf("Enter the number = ");
	scanf("%d",&n);
	while(i<n){
		if (n%i==0){
			sum=sum+i;
		}	
		i++;
	}
	if(sum==n){
        	printf("Number is perfect");
		}
		else{
			printf("Number is not perfect");
		}
}
