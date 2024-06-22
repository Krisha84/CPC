#include<stdio.h> 
//bitwise operator
void main(){
	int n;

	printf("Enter the number :");
	scanf("%d", &n);
	         
	if((n & 1) == 0){
	 	printf("Number is even");
	}

	else{
	printf("Number is odd");
	}	
}
