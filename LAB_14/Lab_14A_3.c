
//14A3 count odd,even numbers
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	int i,arr[n],odd=0,even=0;
	for(i=0;i<n;i++){
		printf("Enter the element into arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
    for(i=0;i<n;i++){
    	if(arr[i]%2==1){
    		odd=odd+1;
		}
		else{
			even=even+1;
		}
	}
	printf("Odd numbers = %d\nEven numbers = %d",odd,even);
}
