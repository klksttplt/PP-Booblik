#include <iostream>
#include "lab.h"
#include <math.h>


using namespace std;

int main() {
	// sum 
	double x = 3;
	int n = 0;
	if (n>=0) {
		cout << "1. Sum" << n << "(" << x << ")= " << sum(x, n) << endl;
	}
	else {
		cout << "1. Error: k>=0!!!" << endl;
	}
	// sin 
	double angle = 1, e = -0.0000000000000000000001;
	if (e>0) {
		cout << "2. sin(" << angle << ")= " << sinL(angle, e) << ", default sin(" << angle << ")= " << sin(angle) << endl;
	}
	else {
		cout <<"2. Error: e>0!!!" << endl;
	}

	// mod and div, a - numerator, b - denominator
	int a = 6, b = 4;
	cout << "3. " << a << "/" << b << ": div= " << divL(a, b) << "; mod= " << modL(a, b) << "/" << b << endl;
	// gcd 
	int a1 = 8, a2 = 12;
	cout << "4. Greatest common divisor of " << a1 << " and " << a2 << ": " << gcdL(a1, a2) << endl;
	// polynomial, b1 - numeric, b2 - n 
	double b1 = 3, b2 = 3;
	cout << "5. Chebyshev polynomial of " << b1 << ", n=" << b2 << " is " << pol(b1,b2) << endl;
	return 0;
}
