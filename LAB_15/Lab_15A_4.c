#include<stdio.h>
void main(){
    int n,i,a;

    printf("Enter the length of array : ");
	scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter an element into arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d",&a);

    for(i=0;i<n;i++){
        if(arr[i]==a){
            printf("%d element found at array of %d",a,i++);
        }
    }
    printf("element not found");
}
