
//Count frequency of digits in an integer.
#include<stdio.h>
void main(){            
	int n,i,count=0;
	printf("Enter the number = ");
	scanf("%d",&n);
	for (i=1;n!=0;i++){
		n=n/10;//1234
		count=count+1;
	}
	printf("%d",count);
}
