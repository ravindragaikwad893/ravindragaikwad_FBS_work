#include<stdio.h>
int main() {
	float price, discount_amount, final_price;
	int discount=0;
	char student;
	
	printf("enter the price");
	scanf("%f", &price);
	printf("are you student");
	scanf("%c", &student); // space before %c to skip newline
	
	if(student=='y'|| student=='y') {
		if (price>500)
		discount=20;
		else
		discount=10;
	}
	else{
		if(price>600)
		discount=15;
		else
		discount=0;
	}
	
	discount_amount=price * discount/100;
	final_price=price-discount_amount;
	
	printf("discount%d%\n", discount);
	printf("discount amount: rs.%2f\n", discount_amount);
	printf("final price to pay:rs.%2f\n", final_price);
	
}
	
		
	
