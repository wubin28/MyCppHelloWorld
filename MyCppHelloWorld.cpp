#include<stdio.h>
int n, num = 0;
int main() {
	printf("please enter an integer between 1 and 99999");
	scanf_s("%d", &n);
	if ((n <= 0) && (n > 9999))
		printf("invalid input. please enter an integer between 1 and 99999.");
	while (n) {
		n /= 10;
		num++;
	}
	printf("number of digits is %d\n", num);
	printf("the digits of the integer from high to low are\n");
	char n;
	while ((n >= '0') && (n <= '9')) {
		if (!(n >= '0') && (n <= '9'))
			break;
	}
	printf("%c", n);
	while (n != 0) {
		printf("%d", n % 10);
		n /= 10;
	}
	return 0;
}