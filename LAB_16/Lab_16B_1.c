#include <stdio.h>
void main(){
	int i,j,n,m;

	printf("Enter number of rows: ");
	scanf("%d",&n);
	printf("Enter number of cols: ");
	scanf("%d",&m);

	int mat[n][m];

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter an element into array : ");
			scanf("%d",&mat[i][j]);
			
		}
	} 

	int trans[n][m];
	
	printf("original matrix is: \n");
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++){
	    	printf("%d",mat[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<n;i++){
		for(i=0;i<m;j++){
			trans[j][i]=mat[i][j];
		}
	}

	printf("Transpose of the matrix is: \n");

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",trans[i][j]);
		}
		printf("\n");
	}	
}
