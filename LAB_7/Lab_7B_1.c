
// 7B2 Read 3 numbers, multiply largest number from first two numbers to third one using switch
#include<stdio.h>
void main(){
	int a,b,c,k,ans;
	printf("Enter the value of a,b,c = ");
	scanf("%d %d %d",&a,&b,&c);
	k=(a>b)?1:2;
	switch(k){
		case 1: ans=a*c;
		printf("Answer : %d",ans);
		break;
		case 2: ans=b*c;
		printf("Answer : %d",ans);
		break;
		default: printf("Enter valid input.");
		break;
	}
}
