#include <iostream>
#include "lab.h"
#include <math.h>

using namespace std;

int main() {

	double x = 12, a = -5, e = 0.0000000000001;
	srand(-10);
	cout << "Power x^a (a is integer):" << endl;
	for (int i = -10; i <= 10; i++) {


		x = rand();
		cout << "Pow  " << power(x, i, e) << endl;
		cout << "Default pow " << pow(x, i) << endl;
		cout << "" << endl;
	}
	cout << "Exp e^x (x>=0):" << endl;
	for (int j = -10; j <= 10; j++) {
		cout << "exp " << expl(j, e) << endl;
		cout << "default exp " << exp(j) << endl;
		cout << "" << endl;
	}

	cout << "ln(1+x) (0<x<=1):" << endl;
	//doesn't work right after x=0.3
	double logx = 0.1;
	for (int k = 0; k < 10; k++) {
		cout << "ln " << ln(logx, e) << endl;
		cout << "default ln " << log(1 + logx) << endl;
		cout << "" << endl;
		logx += 0.1;
	}
	cout << "Not right after ~x=0.3" << endl;
	cout << "ln " << ln(0.567, e) << endl;
	cout << "default ln " << log(1 + 0.567) << endl;
	cout << "" << endl;

	cout << "Cos (period doesn't matter)" << endl;
	for (int l = -10; l <= 10; l++) {
		cout << "cos " << cosl(l, e) << endl;
		cout << "default cos " << cos(l) << endl;
		cout << "" << endl;
	}

	return 0;
}