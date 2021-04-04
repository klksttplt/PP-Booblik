#pragma once
struct String
{

	const char* str;

};
double myAbs(double a);
double power(double x, int a);
double root(double x, double eps);
double task2(double x, double y, int n);
unsigned int task3(unsigned int a);
void task4a(char* str);
void task4b(char* str);
bool operator== (String& s1, String& s2);
bool operator< (String& s1, String& s2);
int task7(const String& s);
bool less8(String& s1, String& s2);
void task9length(String* arr, int l, int h);
void task9lex(String* arr, int l, int h);
bool operator> (String& s1, String& s2);
//task 10
template <typename T>
void sort10(T* arr, int l, int h) {
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
		sort10(arr, l, j);
	if (i < h)
		sort10(arr, i, h);

}