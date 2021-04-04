#include <math.h>
#include "const.h"


double f(double x) {
	return 1 / sqrt(a * a * sin(x) * sin(x) + b * b * cos(x) * cos(x));
}

double Simpson(double a, double b, double(*f)(double), double eps) {
	int n = 2;
	double h = (b - a) * 0.5;
	double ss = 0;
	double s1 = h * (f(a) + f(b));
	double s2 = 0;
	double s4 = 4 * h * f(a + h);
	double s = s1 + s2 + s4;
	do {
		ss = s; n *= 2; h /= 2; s1 *= 0.5; s2 = 0.5 * s2 + 0.25 * s4; s4 = 0; int i = 1;
		do {
			s4 = s4 + f(a + i * h); i += 2;
		} while (i <= n);
		s4 = 4 * h * s4; s = s1 + s2 + s4;
	} while (fabs(s - ss) > eps);
	return s / 3;
}

double GAMean(double a, double b) {
	double ap = a;
	double bp = b;
	double an = sqrt(a * b);
	double bn = (a + b) / 2;
	do {
		ap = an;
		bp = bn;
		an = sqrt(ap * bp);
		bn = (ap + bp) / 2;
	} while (an < ap && bn<bp && an>bn);
	return an;
}

double ellipticalSimpson() {
	double res = Simpson(0,PI/2,f,eps);
	return res;
}