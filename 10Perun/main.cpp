#include <iostream>
#include "lab.h"
#include "const.h"
#define PI 3.14159265

using namespace std;



int main() {
	cout << "a = " << a << ", b = " << b << endl;
	cout<< "P/2*M(a,b):"<<endl;
	cout << PI/(2*GAMean(a, b)) << endl;
	cout << "Simpson elliptical integral:" << endl;
	cout<< ellipticalSimpson()<< endl;
	
	return 0;
}