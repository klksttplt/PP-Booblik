#include <math.h>
#include <assert.h>
//ln(x )= 1, [2, 3];
double ln(double x) {
	return log(x)-1;
}
//sin(x) = x, [-1,1];
double sin1(double x) {
	return (sin(x)-x);
}
//sin(x) = 0, [π-1, π]
double sin2(double x) {
	return sin(x);
}
//exp(x) = 2 - x, [0, 2] 
double exp1(double x) {
	return exp(x)-2+x;
}

double dichotomy(double (*f)(double), double a, double b, double eps) {
	assert(a < b);
	assert(f(a)*f(b)<0 );
	
	
	double c;
	while (fabs(a-b) >= eps) {
		c = (a + b) / 2;
		if (f(c) == 0) return c;
		if (f(a) * f(c) < 0)
			b = c;
		else
			a = c;
	}
	
	return (a + b) / 2;
}