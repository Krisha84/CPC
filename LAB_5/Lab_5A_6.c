
//Vowel or Consonant
#include<stdio.h>
void main(){
	char ch;
	printf("Enter the alphabet = ");
	scanf("%c",&ch);
	if (ch== 'a'||ch== 'e'||ch== 'i'||ch== 'o'||ch== 'u'||ch== 'A'||ch== 'E'||ch== 'I'||ch== 'O'||ch== 'U')
	{
	printf("Given alphabet is vowel.\n");
    }
    else 
	{
	printf("Given alphabet is consonant.\n");
	}
}
