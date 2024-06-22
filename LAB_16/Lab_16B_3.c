#include<stdio.h>
void main(){
    int n,m,i,j,sum=0;

    printf("enter rows and columns: \n");
    scanf("%d %d",&n,&m);

    int arr[n][m];

    if(n!=m){
        printf("Diagonal does not exist");
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter an element into array : ");
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Diagonal elements are: \n");

    for(i=0;i<n;i++){
       
            sum=sum+arr[i][i];
            
        
        printf("%d\t",arr[i][i]);
    }
    printf("\nsum of diagonal element is: %d",sum);
}

