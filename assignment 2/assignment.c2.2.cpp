#include<stdio.h>
int main(){
	float a, b, c;
	printf("enter the three side of the triangle");
	scanf("%f %f %f", &a, &b, &c);
	// check if  the side can  from  a valid triangle
	if ((a+b > c)&&(a + c> b) && (b + c > a)) {
		 if(a== b && b ==c) {
		 	printf("the triangle is equilateral.\n");
		 }
		 else if (a==b || b==c || a==c){
		 	printf("the trangle is isosceles.\n");
		 }
		 else{
		 	printf("the triangle is scalene.\n");
		 }
		 
	}else {
		printf("the given side not form a valid triangle.\n");
		
	}
		 }
		 
		 
		 
	
