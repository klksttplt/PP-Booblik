#include <math.h>

double func(double a,double b) {
	double ap = a;
	double bp = b;
	double an = sqrt(a*b);
	double bn = (a+b) / 2;
	do {
		ap = an;
		bp = bn;
		an = sqrt(ap * bp);
		bn = (ap + bp) / 2;
	} while (an<ap && bn<bp && an>bn);
	return an;
}