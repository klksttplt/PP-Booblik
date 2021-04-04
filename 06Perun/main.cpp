#include <iostream>
#include <random>
#include <time.h>
#include "sort.h"

using namespace std;

//використала quicksort (бо він називається quicksort), бо він простий в реалізації і швидкий
//і добре себе показує в роботі з великими обсягами даних
//

int main() {
	srand(time(0));
	const int k = 100;
	int array[k];
	int arrayTest[k];
	int n = sizeof(array) / sizeof(array[0]);
	for (int j = 0; j < n; j++) {
		array[j] = dRand(-100,100);
		arrayTest[j] = array[j];
	}
	
	
	cout<< "Before: "<< endl;
	for (int i = 0; i < n;i++) {
		cout<<array[i]<<" " << endl;
	}
	
	unsigned int start = clock();
	quickSort(array, 0 , n-1);
	unsigned int end = clock();
	cout << "After: " << endl;
	for (int i = 0; i < n; i++) {
		cout << array[i] << " " << endl;
	}
	cout <<"time qsort " <<end - start << endl;

	return 0;
}