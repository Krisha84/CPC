
//Print sum of 1 to n numbers
#include<stdio.h>
void main(){
	int i=1,n,sum=0;
	printf("Enter number = ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("%d",sum);
}
