#include<stdio.h>
void main(){
    int n,*p;

    printf("Enter any value : ");
    scanf("%d",&n);

    p=&n;

    printf("*p=%d p=%d n=%d",*p,p,n);
}