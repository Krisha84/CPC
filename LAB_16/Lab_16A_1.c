#include<stdio.h>
void main(){
	int n,m,i,j;

	printf("enter value of rows and columns: ");
	scanf("%d %d",&n,&m);

	int arr[n][m];

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter an element into array : ",i);
			scanf("%d",&arr[i][j]);
			
		}
	}

	printf("The matrix form: \n");
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf(" %d",arr[i][j]);
		}
			printf(" \n");
	}

}