#include <iostream>
#include "lab.h"
#define PI 3.14159265
using namespace std;

int main() {
	double a = 0;
	double b = 0;
	double eps = 0.0000000001;
	
	//sin(x) = x, [-1,1];
	a = -1;
	b = 1;
	cout <<"sin(x) = x, [-1,1]  x = " <<dichotomy(sin1, a, b, eps) << endl;
	//ln(x )= 1, [2, 3];
	a = 2;
	b = 3; 
	cout << "ln(x )= 1, [2, 3]  x = " << dichotomy(ln, a, b, eps) << endl;
	//exp(x) = 2 - x, [0, 2] 
	a = 0;
	b = 2;
	cout << "exp(x) = 2 - x, [0, 2]  x = " << dichotomy(exp1, a, b, eps) << endl;
	//sin(x) = 0, [π-1, π]
	a =PI- 1;
	b = PI;
	cout << "sin(x) = 0, [π-1, π]  x = " << dichotomy(sin2, a, b, eps) << endl;
	return 0;
}