#include<stdio.h>
void main(){
    int n,i;

    printf("Enter the length of array : ");
    scanf("%d",&n);

    int arr[n],*ptr[n];
    
    for(i=0;i<n;i++){
        printf("Enter an element into arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        ptr[i]=&arr[i];
        printf("%d\n",*ptr[i]);
    }
}
