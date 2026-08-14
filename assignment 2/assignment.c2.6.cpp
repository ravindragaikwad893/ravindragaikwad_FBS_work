#include<stdio.h>
int main(){
	int num;
	
	printf("enter the number");
	scanf("%d", &num);
	
	if (num% 3 ==0 && num %5==0)
	printf("divisible by both");
	else if (num % 3==0)
	printf("divisible by  5 but  not 3");
	else
	printf("divisible by none");
	
}