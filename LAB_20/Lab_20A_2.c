#include<stdio.h>
#include<string.h>
struct book{
    char title[32];
    char author[32];
    char pub[32];
    float price;
};

void main(){
    int i;
    struct book b[3];

    for(i=0;i<3;i++){
        printf("Enter the book title: ");
        scanf("%s",b[i].title);

        printf("Enter the book author: ");
        scanf("%s",b[i].author);

        printf("Enter the book publication: ");
        scanf("%s",b[i].pub);

        printf("Enter the book price: ");
        scanf("%f",&b[i].price);
    }

    printf("Book Information:\n");

    for (i = 0; i < 3; i++) {
        printf("Book %d:\n", i++);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Publication Year: %s\n", b[i].pub);
        printf("Price: $%.2f\n", b[i].price);
        printf("\n");
    }
}
