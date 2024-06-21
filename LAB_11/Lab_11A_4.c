
//Calculate x pow y without using power function
#include<stdio.h>
void main(){
	int i,x,y,mul;
	printf("Enter the value of x and y = ");
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++){
		mul=x*mul;
	}
	printf("%d",mul);
}



// x pow 3= x*x*x
