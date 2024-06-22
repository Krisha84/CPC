#include<stdio.h>
void main(){
    int a,b,*p,*ptr,sum;

    printf("Enter value of a and b: ");
    scanf("%d %d",&a,&b);

    p=&a;
    ptr=&b;

    sum=*p+*ptr;
    printf("sum of %d and %d is : %d",a,b,sum);
}
