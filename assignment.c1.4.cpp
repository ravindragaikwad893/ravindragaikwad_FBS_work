#include<stdio.h>
int main()
{
	char ch;
	printf("enter an alphabet");
	scanf("%c", &ch);
	if((ch >='A' && ch <= 'Z') || (ch >= 'a' && ch <= 'Z')) {
		if(ch =='A' || ch =='E' || ch =='I' || ch =='o'|| ch == 'U' ||
		ch =='a' || ch == 'e' || ch =='i' || ch =='o' || ch == 'u')
		printf("%c is a vowel.\n", ch);
		else
		printf("%c is a constant");
	} else {
		printf("please enter a valid alphabet.\n");
	}
}

	
