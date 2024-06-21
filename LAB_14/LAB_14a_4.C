
//Find Max, Min, Sum, Avg. of given numbers from an array.
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	int i,arr[n],max,min,sum=0;
	float avg;
	for(i=0;i<n;i++){
		printf("Enter the element into arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
    for(i=0;i<n;i++){
    	if(max<arr[i]){
    	max=arr[i];
	}
}
		min=arr[0];
	for(i=0;i<n;i++){
		if(min>arr[i]){
    		min=arr[i];
	}
}
    for(i=0;i<n;i++){
        sum=sum+arr[i];	
	}
	for(i=0;i<n;i++){
		avg=sum/n;
	}
	printf("Maximum = %d",max);
	printf("\nMinimum = %d",min);
	printf("\nSum = %d",sum);
	printf("\nAverage = %f",avg);
}
