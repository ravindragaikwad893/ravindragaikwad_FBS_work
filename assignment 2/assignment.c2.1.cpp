#include<stdio.h>
int main() {
	int num1, num2;
	char op;
	
	printf("enter the first number");
	scanf("%d",&num1);
	
	printf("enter an operator (+, -, *, /, %%)");
	scanf("%c",&op);
	
	printf("enter a second number");
	scanf("%d",&num2);
	
	switch (op) {
		case '+':
		printf("result = %d\n", num1 + num2);
		break;
		case'-':
		printf("result =%d\n", num1 - num2);
		break;
		 
		 case'*':
		 printf("result =%d\n", num1 * num2);
		 break;
		 
		 case'/':
		 if(num2 !=0)
		 printf("result =%d\n", num1 / num2);
		 else
		 printf("error! division by zero is not allowed.\n");
		 break;
		 
		 case'%':
		 if(num2 !=0)
		 printf("result =%\n", num1 % num2);
		 else
		 printf("error! modulus by zero is not allowed.\n");
		 break;
		 
		 default:
		 	printf("invalid operator!\n");
		 }
		 
	}
	
