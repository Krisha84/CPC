#include<stdio.h>
void main(){
    int m,n,i,j,temp;

    printf("Enter the length of array : ");
    scanf("%d",&n);

    int a[n],*ptr[n];

    for(i=0;i<n;i++){
        printf("Enter an element into a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    printf("for second array\n");
    printf("Enter the length of the second array : ");
    scanf("%d",&m);

    int b[n],*p[m];

    for(j=0;j<m;j++){
        printf("Enter an element into b[%d]: ",j);
        scanf("%d",&b[j]);
    }

    ptr[n]=&a[n];
    p[m]=&b[m];
    temp=*ptr[n];
    *ptr[n]=*p[m];
    *p[m]=temp;

    for(i=0;i<n;i++){
        printf("%d\n",*ptr[i]);
    }
    printf("%d\n",*p[j]);
}
