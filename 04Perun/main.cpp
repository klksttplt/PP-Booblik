#include <iostream>
#include "lab.h"

using namespace std;

int main() {
	double a = 10;
	double b = 10;
	cout <<"M(10,10)="<<func(a,b) << endl;
	a = 9;
	cout << "M(9,10)=" << func(a, b) << endl;
	a = 11;
	cout << "M(11,10)=" << func(a, b) << endl;
	a = 7.845;
	b = 1.458;
	cout << "M(7.845,1.458)=" << func(a, b) << endl;
	a = 0.1;
	b = 200;
	cout << "M(0.1,200)=" << func(a, b) << endl;
	for (int i = 1; i <= 10;i++) {
		for (int j = 1; j <= 10;j++) {
			a = i;
			b = j;
			cout << "M("<<a<<","<<b<<")=" << func(a, b) << endl;
		}
	}
}