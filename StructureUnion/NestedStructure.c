
#include<stdio.h>
// Demonstrate nested structure.
struct address{
    char city[32];
    int houseNo;
    int pincode;
};

struct student{
    char name[32];
    int roll_no;
    struct address add;
};

void main(){
    struct student stu;

    printf("Enter name of student:");
    scanf("%s", stu.name);

    printf("Enter roll_no:");
    scanf("%d", &stu.roll_no);

    printf("Enter city name:");
    scanf("%s", stu.add.city);

    printf("Enter pincode:");
    scanf("%d", &stu.add.pincode);

    printf("Enter house number:");
    scanf("%d", &stu.add.houseNo);

    printf("Name of student is %s\n", stu.name);
    printf("roll no of student is %d\n", stu.roll_no);
    printf("city of student is %s\n", stu.add.city);
    printf("pincode of student is %d\n", stu.add.pincode);
    printf("house number of student is %d\n", stu.add.houseNo);
}
