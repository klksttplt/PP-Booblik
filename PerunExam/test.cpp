#include <assert.h>
#include "test.h"
#include <math.h>

//task2
double power(double x, int a) {
	int res = 1;
	
	while (a) {
		if (a & 1) {
			res *= x;
			--a;
		}
		else {
			x *= x;
			a >>= 1;
		}
		
	}
	return x;
}

double myAbs(double a) {
	if (a < 0) return -a;
	else return a;
}
double root(double x, double eps)
{
	double s = 0.5 * x;
	double t;
	do
	{
		t = s;
		s = (s + x / s) * 0.5;
	} while (myAbs(s - t / s) > eps );
	return s;
};



double task2(double x, double y, int n) {
	double e = 0.000000001;
	double x0 =  power(x, n + 1);
	double y0 = y;
	double xn, yn;
	double res = x0 * y0;
	for (int i = 0; i < n;i++ ) {
		xn = root(x0,e);
		yn = power(y0,2);
		x0 = xn;
		y0 = yn;
		res += xn * yn;
	}
	
	return res;
}


//task 3
unsigned int task3(unsigned int a) {
	unsigned int b = ~a;
	assert(a ^ b == 0xffffffff);
	return b;
}

//task 4 
void task4a(char* str) {

	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;

		}
		i++;
	}

}
void task4b(char* str) {

	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;

		}
		i++;
	}
}

//task 5

bool operator== (String& s1, String& s2) {
	int i = 0;
	while (s1.str[i] != '\0' || s2.str[i] != '\0') {
		if (s1.str[i] != s2.str[i]) return false;
		i++;
	}
	return true;
}

//task 6

bool operator< (String& s1, String& s2) {
	int i = 0;
	
	String s1copy = s1;
	String s2copy = s2;
	
	
	while (s1copy.str[i] != '\0' || s2copy.str[i] != '\0') {
		if (s1copy.str[i] >= 'A' && s1copy.str[i] <= 'Z') {
			if (s1copy.str[i]+32 < s2copy.str[i]) return true;
		}else 
		if (s2copy.str[i] >= 'A' && s2copy.str[i] <= 'Z') {
			if (s1copy.str[i]  < s2copy.str[i]+32) return true;
		}else 
		if (s1copy.str[i] < s2copy.str[i]) return true;
		if (s2copy.str[i] < s1copy.str[i])
			return false;

		i++;
	}

	return false;
}

//task 7 
int task7(const String& s) {
	int i = 0;
	while (s.str[i] != '\0') {
		i++;
	}
	return i;
}

//task 8 
bool less8(String& s1, String& s2) {
	if (task7(s1) < task7(s2)) return true;
	else return false;

}

//task 9
void task9length(String* arr, int l, int h) {
	int i = l;
	int j = h;
	String curr = arr[(i + j) / 2];
	String temp;
	while (i <= j)
	{
		while (task7(arr[i]) < task7(curr))
			i++;
		while (task7(curr) < task7(arr[j]))
			j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	if (j > l)
		task9length(arr, l, j);
	if (i < h)
		task9length(arr, i, h);

}
//help
bool operator> (String& s1, String& s2) {
	int i = 0;
	if (s1 < s2 || s1 == s2) return false;
	else return true;
}

void task9lex(String* arr, int l, int h) {
	int i = l;
	int j = h;
	String curr = arr[(i + j) / 2];
	String temp;
	while (i <= j)
	{
		while (arr[i] < curr)
			i++;
		while (arr[j] > curr)
			j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	if (j > l)
		task9lex(arr, l, j);
	if (i < h)
		task9lex(arr, i, h);

}

//task 10 - in header..

//template <typename T>
//void sort10(T* arr, int l, int h) {
//	int i = l;
//	int j = h;
//	String curr = arr[(i + j) / 2];
//	String temp;
//	while (i <= j)
//	{
//		while (arr[i] < curr)
//			i++;
//		while (arr[j] > curr)
//			j--;
//		if (i <= j)
//		{
//			temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//			i++;
//			j--;
//		}
//	}
//	if (j > l)
//		sort10(arr, l, j);
//	if (i < h)
//		sort10(arr, i, h);
//
//}

