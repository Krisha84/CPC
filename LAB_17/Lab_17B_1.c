#include<stdio.h>
void main(){
    int n,i;

    printf("Enter the length of array : ");
    scanf("%d",&n);

    int a[n],b[n],*ptr[n];

    for(i=0;i<n;i++){
        printf("Enter an element into arr[%d]: ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        ptr[i]=&a[i];
        b[i]=*ptr[i];
        printf("%d\n",*ptr[i]);
    }
}
