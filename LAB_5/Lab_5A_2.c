
//Swap numbers without temp
#include<stdio.h>
void main(){
	int a,b;  //2,3
	printf("Values before swapping = ");
	scanf("%d %d",&a,&b);
	a=a+b;  //5
	b=a-b;  //2
	a=a-b;   //3
	printf("Values of after swapping : x=%d, y=%d",a,b);
}
