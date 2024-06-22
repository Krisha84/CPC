#include<stdio.h>
void main(){
	int i,j,n,m;

	printf("Enter rows and columns respectively: \n");
	scanf("%d %d",&n,&m);

	int arr1[n][m];
	int arr2[n][m];
	int result[n][m];

	printf("For Matrix_1:\n");

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter an element into array : ");
			scanf("%d",&arr1[i][j]);
		}
	}

	printf("For Matrix_2:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter an element into array : ");
			scanf("%d",&arr2[i][j]);
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			result[i][j]=arr1[i][j]+arr2[i][j];
		}
	}

    printf("The sum of two matrices is: \n");
    for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d + %d = %d\t",arr1[i][j],arr2[i][j],result[i][j]);
		}
    	printf("\n");
	}
}
