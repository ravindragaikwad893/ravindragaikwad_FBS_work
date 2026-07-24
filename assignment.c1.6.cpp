#include<stdio.h>
int main(){
char ch;
printf("enter a character");
scanf("%C",&ch);
if(ch>='A'&& ch<='Z') {
	printf("%c in a upercase letter.\n", ch);
}
else if(ch>= 'a' && ch <= 'z') {
	printf("%c in a lowercase letter.\n",ch);
}
else{
	printf("%c is not an alphabet.\n", ch);
	
}
}
	
	
	
