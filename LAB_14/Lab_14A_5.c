//14A5 Read five person height and weight and count the number of person having height greater
//than 170 and weight less than 50.
#include<stdio.h>
void main(){
	int i,j,count=0,a[5],b[5];
	for(i=0;i<5;i++){
		printf("Enter the height into a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(j=0;j<5;j++){
		printf("\nEnter the weight into b[%d]: ",j);
		scanf("%d",&b[j]);
	}
	
	for(i=0;i<5;i++){
		if(a[i]>170 && b[j]<50){
			count++;
		}
	}
	printf("\nCount = %d",count);
