#include <stdio.h>

int one(int r) {


	int t;
	int f = 1;
	for (t = 2; t < r; t++) {
		if ((r%t) == 0) {
			return 0;
		}
	}
}

int twoprime(int n) {

	int np;
	int flag = 1;
	for (np = 2; np < n; np++) {
		if (n%np == 0)
		{
			flag = 0;
			break;
		}

	}
	return flag;
}


//armstrong      각자리수를 세제곱하여 더하면 그 수가 나온다
int twoarmstrong(int n) {
	int f, s, t;
	int flag = 1;
	f = n / 100;
	s = (n % 100) / 10;
	t = ((n % 100) % 10) / 1;
	if (n == f*f*f + s*s*s + t*t*t) {

		flag = 0;
	}
	return flag;
}



int three(int n) {
	int tt, prime = 1;
	for (tt = 2; tt <= n / 2; ++tt) {

		if (n%tt == 0)
		{
			prime = 0;
			break;
		}
	}

	return prime;

}

int main()
{
	int i;
	int a, b, c;
	int n1, n2, n3, n4;
	int tp, ta, flag = 0;
	int first;
	int tn;
	printf("-----Select number-----\n------Display Prime Numbers Between Intervals------1\n-----Check Prime or Armstrong Number -----2\n-----Check Whether a Number can be Expressed as Sum of Two Prime Numbers-----3\nEnter the number:  ");
	scanf("%d", &i);
	while ((i < 1) || (i > 3)) {
		printf("-----Select number-----\n------Display Prime Numbers Between Intervals------1\n-----Check Prime or Armstrong Number -----2\n-----Check Whether a Number can be Expressed as Sum of Two Prime Numbers-----3\nEnter the number:  ");
		scanf("%d", &i);
	}
	if (i == 3) {

		printf("Enter the number: ");
		scanf("%d", &n4);

		for (tn = 2; tn <= n4 / 2; ++tn) {
			if (three(tn) == 1) {
				if (three(n4 - tn) == 1) {
					printf("%d=%d+%d\n", n4, tn, n4 - tn);
					flag = 1;
				}
			}


		}

		if (flag == 0)
			printf("it cannot be expressed as the sum of two prime number");
	}
	if (i == 2) {
		printf("Enter the number:   ");
		scanf("%d", &n3);
		flag = twoprime(n3);
		if (flag == 1) {

			printf("it is a prime number\n");

		}
		else {
			printf("it is not a prime number\n");
		}
		flag = twoarmstrong(n3);
		if (flag == 0) {
			printf("it is armstrong number");
		}
		else
			printf("it is not armstrong number");
	}
	if (i == 1) {
		printf("Enter first number: ");
		scanf("%d", &n1);
		printf("Enter second number: ");
		scanf("%d", &n2);

		if (n1 < n2) {
			for (a = n1 + 1; a < n2; a++) {

				if (one(a)) {

					printf("%d  ", a);
				}
			}
		}
		if (n2 < n1) {
			for (a = n2 + 1; a < n1; a++) {

				if (one(a)) {

					printf("%d  ", a);
				}
			}
		}
		if (n1 == n2) {

			printf("first number and second number are same.");
		}
	}
	getchar();
	getchar();
    return 0;
}