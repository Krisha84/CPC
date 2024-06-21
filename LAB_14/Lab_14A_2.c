
//14A2 count +ve,-ve numbers
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	int i,arr[n],pos=0,neg=0;
	for(i=0;i<n;i++){
		printf("Enter the element into arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
    for(i=0;i<n;i++){
    	if(arr[i]>=0){
    		pos=pos+1;
		}
		else{
			neg=neg+1;
		}
	}
	printf("Positive numbers = %d\nNegative numbers = %d",pos,neg);
}
