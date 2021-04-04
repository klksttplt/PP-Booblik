#include <iostream>
#include "lab.h"

using namespace std;

int main() {
	size_t steps = 0;
	cout <<"Testing power" << endl;
	int a = 3;
	for (int i = 0; i < 20;i++) {		
		cout <<a<<"^"<<i<<" = "<<  power(3, i, steps) << endl;
		cout << "steps: " << steps << endl;
		steps = 0;
	}
	
	cout << "Testing fibbonacci" << endl;
	for (int i = 0; i < 20; i++) {
		cout << "Fib("<< i<<")" << " = " << Fibonaci(i,steps) << endl;
		cout << "steps: " << steps << endl;
		steps = 0;
	}

	cout << "Testing my Fibbonacci" << endl;
	for (int i = 0; i < 20; i++) {
		cout << "Fib(" << i << ")" << " = " << myfib(i, steps) << endl;
		cout << "steps: " << steps << endl;
		steps = 0;
	}
	return 0;
}