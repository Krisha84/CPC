#include<stdio.h>
void main(){
    int n,i;

    printf("Enter the length of array : ");
	scanf("%d",&n);

    int a[n],b[n];

    for(i=0;i<n;i++){
        printf("Enter an element into arr[%d]: ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        b[i]=a[i];
        printf("copy element in b[%d] from a[%d]: %d\n",i,i,b[i]);
    }
}
