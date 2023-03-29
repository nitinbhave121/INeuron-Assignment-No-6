

// . Write a program to calculate LCM of two numbers

#include <stdio.h>
int main() {
	int x, y, res;
	printf("Enter two positive integers: ");
	scanf("%d %d", &x, &y);
	res = (x > y) ? x : y;

	while (1) {
		if (res % x == 0 && res % y == 0) {
			printf("The LCM obtained from %d and %d is %d.", x, y, res);
			break;
		}
		++res;
	}

	return 0;
}

/*
Enter two positive integers: 10 15
The LCM obtained from 10 and 15 is 30.
*/