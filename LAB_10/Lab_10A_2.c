
/*Find the sum and average of different numbers which are accepted by 
user as many as user wants*/
#include<stdio.h>
void main(){
	int n,i,k;
	float sum=0,avg;
	printf("Enter the number of elements = ");
	scanf("%d",&k);
	while(i<=k-1){
		printf("Enter the numbers = ");
		scanf("%d",&n);
		if(n!=0){
			sum=sum+n;
		}
		i++;
	}
	printf("Sum = %f \n",sum);
	avg=sum/k;
	printf("Average = %f",avg);
}
