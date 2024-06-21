
//Print number and its square root for 0 to 9
#include<stdio.h>
#include<math.h>
void main(){
	int i=0;
	float squareroot;
	printf("Enter Square roots 0 to 9");
	while (i<10)
	{
		squareroot=sqrt(i);
		printf("\n%d = %f",i,squareroot);
		i++;
	}
}
