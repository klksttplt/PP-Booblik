#include <iostream>
#include "lab.h"

using namespace std;
double e = 0.00000001;
int main() {
	for (int i = 1; i <= 10;i++) {
		cout << "gauss of " << i << " = " << gauss(i, e) << endl;
		

	}
	for (int i = -10; i <= 10;i++) {
		cout << "exp1 of " << i << " = " << expl(i, e) << endl;
		cout << "exppart of " << i << " = " << expPart(i, e) << endl;
		cout << "def exp of " << i << " = " << exp(i) << endl;
	}
	return 0;
}
