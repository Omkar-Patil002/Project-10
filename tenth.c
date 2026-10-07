#include <stdio.h>
int main(){
	float a,b,sum,sub,div,mul;
	printf("Enter first number:");
	scanf("%f",&a);
	printf("Enter second number:");
	scanf("%f",&b);
	sum=a+b;
	printf("The addition of two number is %.2f\n",sum);
	sub=a-b;
	printf("The subtraction of two number is %.2f\n",sub);
	mul=a*b;
	printf("The multiplication of two number is %.2f\n",mul);
	div=a/b;
	printf("The division of two number is %.2f\n",div);
	return 0;
}