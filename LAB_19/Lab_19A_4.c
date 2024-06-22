#include<stdio.h>
void main(){
    int i=0,b=0;
    char str[20],a;

    printf("Enter the string: ");
    scanf("%s",&str);

    printf("Enter a charcter to find: ");
    scanf(" %c",&a);

    for(i=0;str[i]!='\0';i++){
        if(str[i]==a){
            b=1;
        }
    }

    if(b){
        printf("Charcter found in the string !!");
    }
    else{
        printf("Charcter not found in the string !!");
    }
}
