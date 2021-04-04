#pragma once
struct Matrix2x2 { int _11, _12, _21, _22; };
struct Vector2 { int _1, _2; };

Vector2 multVect(Vector2 a, Matrix2x2 b);
Matrix2x2 multMatr(Matrix2x2 a, Matrix2x2 b);
Matrix2x2 powerMatrix(Matrix2x2 a, int n);
int fib(int n);