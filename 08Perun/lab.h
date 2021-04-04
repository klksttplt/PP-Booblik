#pragma once
struct Matrix2x2 { int _11, _12, _21, _22; };
struct Vector2 { int _1, _2; };

void zet(double& y, double& x, unsigned int& k, size_t& steps);
double power(double x, unsigned int n, size_t& steps);
void fib(double& f1, double& f2, unsigned int n, size_t& steps);
double Fibonaci(unsigned int n, size_t& steps);

Vector2 multVect(Vector2 a, Matrix2x2 b);
Matrix2x2 multMatr(Matrix2x2 a, Matrix2x2 b);
Matrix2x2 powerMatrix(Matrix2x2 a, int n, size_t& steps);
int myfib(int n, size_t& steps);