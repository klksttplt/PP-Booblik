
struct Matrix2x2 { int _11, _12, _21, _22; };
struct Vector2 { int _1, _2; };



//multiplication vector*matrix
Vector2 multVect(Vector2 a, Matrix2x2 b) {
	int a1 = b._11 * a._1 + b._12 + a._2;
	int a2 = b._21 * a._1 + b._22 + a._2;
	return Vector2{ a1,a2 };
}
//multiplication matrix*matrix
Matrix2x2 multMatr(Matrix2x2 a, Matrix2x2 b) {
	int c1 = a._11 * b._11 + a._12 * b._21;
	int c2 = a._11 * b._12 + a._12 * b._22;
	int c3 = a._21 * b._11 + a._22 * b._21;
	int c4 = a._21 * b._12 + a._22 * b._22;
	return Matrix2x2{ c1,c2,c3,c4 };
}

//power matrix^n
Matrix2x2 powerMatrix(Matrix2x2 a, int n) {
	if (n == 0) return Matrix2x2{ 1,0,0,1 };
	if (n == 1) return a;
	else {
		Matrix2x2 temp = a;
		for (int i = 1; i < n; i++) {
			temp = multMatr(temp, a);
		}
		return temp;
	}
}
//fibonacci numbers
int fib(int n) {

	Matrix2x2 a{ 1,1,1,0 };
	Vector2 v{ 1,0 };

	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		Matrix2x2 b = powerMatrix(a, n - 1);
		Vector2 res = multVect(v, b);
		return res._2;
	}

}