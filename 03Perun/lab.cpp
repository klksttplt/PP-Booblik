#include <math.h>

//gauss
double gauss(double x, double e) {
	double res = x;
	double a = x;
	int i = 1;
	while (fabs(a) > e) {
		a *= -x * x * (2 * i - 1) / ((2 * i +1)*i);
		res += a;
		i++;
	};
	return res;


}

/// taylor series 


double expl(double x, double eps) {
	double e = 2.71828, sum = 1, res = 1;
	int i = 1;

	while (fabs(res) >= eps) {
		res *= x / i;
		i++;
		sum += res;

	}
	return sum;
}
double quickPower(double x, int a) {
	int res = 1;
	

	while (a) {
		if (a & 1) {
			res *= x;
			--a;
		}
		else {
			x *= x;
			a >>= 1;
		}
		
	}
	return res;
}

/// not taylor series

double expPart(double x,double ez) {
	double e = 2.71828, sum = 1, res;
	if (x>=0) {
		int x1 = x;
		double xint = x - x1;
		int xfract = x - xint;

		res = quickPower(e, xint) * expl(xfract,ez);
	}
	if (x<0) {
		res = 1 / expPart(-x,ez);
	}
	return res;
}