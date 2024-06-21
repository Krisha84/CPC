
//14A1 print n numbers in normal and reverse order
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++){
		printf("Enter the element into arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d,",arr[i]);
	}
	printf("\n");
	for(i=n-1;i>=0;i--){
		printf("%d,",arr[i]);
	}
}