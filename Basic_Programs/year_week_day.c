#include<stdio.h>
void main(){

    int day,year,week;

    printf("enter days:");
    scanf("%d", &day);
    
    int year = day / 365;
    
    int week = day / 7;

    week = week % 52;
    day = (day % 365)%7;
    
    printf("%d %d %d", year, week, day);
}
