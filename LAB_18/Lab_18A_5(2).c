#include<stdio.h>
void swap(int*,int*);
void main(){
    int temp;
    int a,b;

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    printf("before: %d %d\n",a,b);
    swap(&a,&b);

    printf("after: %d %d",a,b);
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

    
}
