#include<stdio.h>
int main() {
	int age;
	
	printf("enter your age");
	scanf("%d",&age);
	
	if (age <12)
	printf("children");
	else if (age >=12 && age <=19)
	printf("teenager");
	else if (age >= 20 && age <=59)
	printf("adult");
	else
	
	printf("senior citizen");
}