#include <iostream>
#include <math.h>
#include "lab.h"

using namespace std;

int main() {
	double x = 2;
	int a = 100;
	cout<<"default result"<<pow(x,a) <<endl;
	cout <<"Simple iteration "  <<power(x, a) << endl;
	cout << "Simple rec "<<powerRec(x, a) << endl;
	cout << "Quick rec (something is wrong but code is ok.....)" <<quickPowerRec(x, a) << endl;
	cout << "Quick "<<quickPower(x, a) << endl;
	return 0;
}
