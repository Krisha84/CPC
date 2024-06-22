
#include<stdio.h>
#include<string.h>
// Create, declare and initialize structure employee.
struct employee{
    char name[100];
    float pac;
    int age;
};

void main(){
    struct employee e;

    printf("enter name of employee:");
    gets(e.name);

    printf("enter pac of employee:");
    scanf("%f", &e.pac);
    
    printf("enter age of employee:");
    scanf("%d", &e.age);

    printf("name of employee:%s\n", e.name);
    printf("pacakge of employee:%flac\n", e.pac);
    printf("age of employee:%d\n", e.age);
} 
