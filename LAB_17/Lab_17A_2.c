#include<stdio.h>
void main(){
    int n,*p;

    printf("Enter any value: ");
    scanf("%d",&n);

    p=&n;
    printf("%d\n",*p);

    char m,*ptr;

    printf("Enter the number: ");
    scanf(" %c",&m);

    ptr=&m;
    printf("%c\n",*ptr);

    float h,*pptr;

    printf("Enter the number: ");
    scanf("%f",&h);

    pptr=&h;
    printf("%f\n",*pptr);

   double a,*ptrr;

   printf("Enter the number: ");
   scanf("%lf",&a);
   
   ptrr=&a;
   printf("%lf\n",*ptrr);

}
