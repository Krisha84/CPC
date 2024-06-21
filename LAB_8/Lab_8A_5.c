
//Get 10 numbers from user print count of odd, even numbers
#include<stdio.h>
void main(){
	int i,countodd=0,counteven=0;
	int array[10];
	for(i=0;i<=9;i++)
	{ 
	printf("Enter the element into array[%d] = ",i);
	scanf("%d",&array[i]);
		if(array[i]%2==0)
		{
		counteven=counteven+1;
		}
		else 
		{
		countodd=countodd+1;
		}
	}
	printf("Even = %d",counteven);
	printf("\nOdd = %d",countodd);
}
