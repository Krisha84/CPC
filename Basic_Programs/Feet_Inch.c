#include<stdio.h>
void main(){

    float f;
    float inch;

    printf("Enter feet:");
    scanf("%f", &f);

    inch = 12 * f;

    printf("Inch : %f", inch);
}
