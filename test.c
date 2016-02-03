#include <stdio.h>

void main(){

	int a;
	int b;
	int sum;
	int mul;

	printf("input the number1 : ");
	scanf("%d", &a);
	printf("input the number2 : ");
	scanf("%d", &b);

	sum = a + b;
	mul = a * b;
	printf("Sum : %d\n", sum);
	printf("Mul : %d\n", mul);
}
