
//Find out sum of first and last digit of a given number.
#include<stdio.h>
void main(){
	int n,i,sum=0,rem,ld,fd,sumlf;
	printf("Enter the value n = ");
	scanf("%d",&n);
	ld=n%10;  //2345
    while (n!=0){
	rem=n%10; 
	sum=(sum*10)+rem;
	n=n/10;
}     //sum 5432
    fd=sum%10;
    sumlf=ld+fd;
    printf("%d",sumlf);
}
