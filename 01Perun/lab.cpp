#include <math.h>

/*double root(double x, double e)
{
	double s = 0.5 * x;
	double t;
	do
	{
		t = s;
		s = (s + x / s) * 0.5;
	} while ((fabs(s - t) / s) > e);
	return s;
}*/
//power for integer a only ;
double power(double x, double a, double e) {
	int a1 = a;
	double res = 1.0;
	int i = 1;
	if (a==a1 && a>0) {
		while ( i <= a) {
			res *= x;
			i++;
		}
	}
	if (a==a1 && a<0) {
		a *= -1;
		while (i <= a) {
			res *= x;
			i++;
		}
		res = 1 / res;
	
	
		
	}
	
	
	return res;
}

//exp
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

//ln(1+x) not really accurate
double ln(double x, double e ) {
	int i = 2;
	double res = x, sum = x;
	while ((res/i)>= e) {
		res *= -x;
		sum += res / i;
		i++;
	}
	return sum;
}

//cos (period doesn't matter)
double cosl(double x, double e) {
	/*if (fabs(x)> 6.28) {
		while (fabs(x) > 6.28) {
			x -= 6.28;
		}
	}*/
	double res = 1, sum = 1;
	int i = 1;
	while (fabs(res)>=e) {
		res *= -x * x /( 2*i*(2*i-1));
		sum += res;
		i++;
	}
	return sum;
}
