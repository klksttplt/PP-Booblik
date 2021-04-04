#include <iostream>
#include "test.h"
#include <assert.h>

using namespace std;

int main() {
	//task 1 
	//int x = x = 0 ? 1 : 0
	//the answer is always 0


	//task 2
	cout << "task 2" << endl;
	double x = 1;
	double y = 2;
	cout << "x = "<<x<<" y = " <<y<< endl;
	for (int i = 0; i < 10; i++) {
		cout <<"n = "<<i<<"  "<< task2(x, y, i) << endl;
	}
	cout << "" << endl;

	//task 3
	cout << "task 3" << endl;
	unsigned int a3 = 0;
	cout << "input is 0: " << endl;
	cout << task3(a3) << " is ~0" << endl;
	a3 = 4294967295;
	cout << "input is 4294967295: " << endl;
	cout << task3(a3) << " is ~4294967295" << endl;
	cout << "" << endl;

	//task 4
	cout << "task 4" << endl;
	char str4a[] = "aBcdEFsghf";
	char str4b[] = "aBcdEFsghf";
	cout << "Default: " << str4a << endl;
	task4a(str4a);
	cout << "Upper: " << str4a << endl;
	task4b(str4b);
	cout << "Lower: " << str4b << endl;
	cout << "" << endl;

	//task 5 
	cout << "task 5" << endl;
	String s1 = { "abc" };
	String s2 = { "abc" };
	cout << "Strings: " << s1.str << " " << s2.str << endl;
	if (s1 == s2) {
		cout << "Strings are equal" << endl;
		assert(strcmp(s1.str, s2.str) == 0);
	}
	else {
		cout << "Strings are not equal" << endl;
		assert(strcmp(s1.str, s2.str) != 0);
	}

	String s3 = { "abcd" };
	String s4 = { "abc" };
	cout << "Strings: " << s3.str << " " << s4.str << endl;
	if (s3 == s4) {
		cout << "Strings are equal" << endl;
		assert(strcmp(s3.str, s4.str) == 0);
	}
	else {
		cout << "Strings are not equal" << endl;
		assert(strcmp(s3.str, s4.str) != 0);
	}
	cout << "" << endl;

	//task 6
	cout << "task 6" << endl;
	String s5 = { "abcd" };
	String s6 = { "abd" };
	cout << "Strings: " << s5.str << " " << s6.str << endl;
	if (s5 < s6) {
		cout << "String " << s5.str << " is less than " << s6.str << endl;
		assert(strcmp(s5.str, s6.str)<0);
	}
	else {
		cout << "String " << s5.str << " is not less than " << s6.str << endl;
		assert(strcmp(s5.str, s6.str) >= 0);
	}

	String s7 = { "ad" };
	String s8 = { "abd" };
	cout << "Strings: " << s7.str << " " << s8.str << endl;
	if (s7 < s8) {
		cout << "String " << s7.str << " is less than " << s8.str << endl;
		assert(strcmp(s7.str, s8.str) < 0);
	}
	else {
		cout << "String " << s7.str << " is not less than " << s8.str << endl;
		assert(strcmp(s7.str, s8.str) > 0);
	}
	cout << "" << endl;

	//task 7 
	cout << "task 7" << endl;
	String str7 = { "whatacoolstring" };
	cout << "String " << str7.str << " is " << task7(str7) << " long" << endl;
	assert(strlen(str7.str)== task7(str7));
	cout << "" << endl;

	//task 8 
	cout << "task 8" << endl;
	String str81 = { "abc" };
	String str82 = { "abcdd" };
	if (less8(str81, str82)) {
		cout << str81.str << " is shorter than " << str82.str << endl;
	}
	assert(strlen(str81.str) < strlen(str82.str));
	cout << "" << endl;

	//task 9 
	cout << "task 9" << endl;
	struct String arr91[] = { "bbbbbbbb", "cccc", "aa","ofjfh" };
	struct String arr92[] = { "bbbbbbbb", "cccc", "aa","ofjfh" };
	cout << "Before sorting: " << endl;
	int k = sizeof(arr91) / sizeof(arr91[0]);
	for (int i = 0; i < k; i++) {
		cout << arr91[i].str << " " << endl;
	}
	task9length(arr91, 0, k - 1);
	cout << "Sorted by length: " << endl;
	for (int i = 0; i < k; i++) {
		cout << arr91[i].str << " " << endl;
	}

	cout << "Sorted lexicographically:" << endl;
	k = sizeof(arr92) / sizeof(arr92[0]);
	task9lex(arr92, 0, k - 1);
	for (int i = 0; i < k; i++) {
		cout << arr92[i].str << " " << endl;
	}
	cout << "" << endl;

	//task 10
	cout << "task 10" << endl;
	struct String test[] = { "bbbbbbbb", "cccc", "aa","ofjfh" };

	k = sizeof(test) / sizeof(test[0]);
	cout << "Default array:" << endl;
	for (int i = 0; i < k; i++) {
		cout << test[i].str << endl;
	}
	sort10(test, 0,k-1);
	cout << "Sorted:" << endl;
	for (int i = 0; i < k; i++) {
		cout << test[i].str << endl;
	}


	return 0;
}