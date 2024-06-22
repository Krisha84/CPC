#include<stdio.h>
void main(){
    int n;

    printf("Enter the number :");
    scanf("%d", &n);

    n=n>>1;

    printf("%d", n);
}
