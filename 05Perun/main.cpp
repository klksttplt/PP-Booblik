#include <iostream>
#include "Horner.h"

using namespace std;
int main() {
	int size = 5;
	double x = 1;
	double* coef = new double[size];
	
	fillArray(coef, size);
	cout<<"x="<<x << endl;
	cout<<"Result:" <<Horner(coef,size,x)<<endl;
	for (int i = 0; i < size; i++) {
		cout <<"a"<<i<<"=" <<*(coef + i) << endl;
	}
	
	
	
}