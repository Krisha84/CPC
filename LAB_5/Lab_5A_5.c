
//Find the largest number out of 3.
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the value = ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	{
	if (a>c)
	{printf("A is largest\n");
	}
	else 
	{printf("C is largest\n");	
	}
}
    else 
    {
    if (b>c)
    {printf("B is largest\n");
	}
	else 
	{printf("C is largest\n");
	}
	}	 
}
