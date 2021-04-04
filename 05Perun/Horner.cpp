#include "Horner.h"
#include <cassert>
#include <time.h>
#include <cstdlib>

//random double
double dRand(double min, double max) {
	double a = double(rand())/(double(RAND_MAX)+1.0);
	double res = min + a * (max - min);
	return res;
}
void fillArray(double* coeff, size_t size)
{
	srand(time(0));
	for (int i = 0; i < size; i++) {
		coeff[i] = dRand(-20,20);
		/*coeff[i] = 1 + rand() % 100 - (1 + rand() % 100);*/
	}
	/**(coeff + 0) = 718.597;
  *(coeff + 1) = 107.422;
  *(coeff + 2) = 853.088;
  *(coeff + 3) = 818.695;
  *(coeff + 4) = 997.162;*/
}
double sum(double* coeff, size_t size, int sign)
{

	double result = 0;
	if (sign == 1) {
		for (int i = 0; i < size; i++) {
			result += coeff[i];
		}
	}
	if (sign == -1) {
		for (int i = 0; i < size; i++) {
			if (i % 2 == 0) {
				result += coeff[i];
			}
			else {
				result += coeff[i] * (-1);
			}
		}
	}
	return result;
}
double Horner(double* coeff, size_t size, double x)
{
	/*fillArray(coeff, size);*/
	double result = 0;
	double a1 = coeff[0];
	double a2 = 0;
	for (int i = 1; i < size; i++) {
		a2 = coeff[i] + a1 * x;
		a1 = a2;
	}
	result = a1;
	if (x == 1 || x == -1) {
		result = sum(coeff, size, x);
	}
	assert(((x==1)||(x==-1))?(result==sum(coeff, size, x)):true);


	return result;
}
