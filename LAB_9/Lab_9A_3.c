
//Calculate xpowy without using power function
#include<stdio.h>
void main(){
	int i=1,y,mul=1,x;
	printf("Enter the number x and y = ");
	scanf("%d %d",&x,&y);
	while(i<=y){
		mul=mul*x;
		i++;
	}
	printf("%d",mul);
}
