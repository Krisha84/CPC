
//Print numbers between two given numbers which is divisible by 2
#include<stdio.h>
void main(){
	int i,a,b;
	printf("Enter number a = ");
	scanf("%d",&a);
	printf("Enter number b = ");
	scanf("%d",&b);
	i=a+1;
	while(i<b)
	{
			if (i%2==0){
				printf("%d",i);
			}
		i=i+1;
	}	
	}
