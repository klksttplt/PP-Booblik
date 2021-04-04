#include <math.h>
//sum
double sum(double x, int k) {
	double sum = 1.0, a = 1.0;
	if (k >= 0) {
		for (int i = 1; i <= k; i++) {
			a *= -x / (i + 1);
			sum += a;
		}
		return sum;
	}
	else return 0;
}
//never used factorial ;(
/*int fact(int a) {
	int res = 1;
	if (a == 0 || a == 1) {
		return 1;
	}
	else {
		for (int i = 2; i <= a; i++) {
			res *= i;
		}
	}
	return res;
}*/

//sin damn it!
double sinL(double x, double e) {
	double a = x, sum = x;
	int i = 1;
	while (fabs(a) > e) {
		a *= -x * x / (2 * i * (2 * i + 1));

		sum += a;
		i++;

	}
	return sum;
}
//div
int  divL(int a, int b) {
	int i = 0, ai = a;
	while (ai >= b) {
		ai -= b;
		i++;
	}
	return i;
}
//mod
int modL(int a, int b) {
	int i = 0, ai = a, k = 0, c = 10;
	while (ai >= b) {
		ai -= b;
		i++;
	}
	return ai;

}
//greatest common divisor
int gcdL(int a, int b) {
	if (a == b) {
		return a;
	}
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	return gcdL(a, b - a);
}
//Chebyshev polynomial
double pol(double x, int n) {
	double a0 = 1;
	double a1 = x;

	double res;
	if (n == 0) {
		return a0;
	}
	else if (n == 1) {
		return a1;
	}
	else {
		for (int i = 2; i <= n; i++) {


			res = 2 * x * a1 - a0;

			a0 = a1;
			a1 = res;
		}
		return res;
	}
}