#include<stdio.h>
int main(){

    int sec,min,hour;
    
    printf("enter time in sec :");
    scanf("%d", &sec);

    int second = sec % 60;

    int min = sec / 60;

    int hour = min / 60;

    int x = min / 60;
    min = min - (60 * x);

    printf("hour 2%d : min 2%d : sec 2%d \n", hour, min, second);

    return 0;
}
