struct Matrix2x2 { int _11, _12, _21, _22; };
struct Vector2 { int _1, _2; };

void zet(double& y, double& x, unsigned int& k, size_t& steps)
{
	steps++;
	if (k > 0)
	{
		if (k % 2 == 1)
		{
			y *= x; k--;
		}
		else
		{
			x *= x; k /= 2;
		};
		zet(y, x, k,steps);
	}
	
}

double power(double x, unsigned int n, size_t& steps)
{
	double y = 1;
	zet(y, x, n,steps);
	return y;
}

void fib(double& f1, double& f2, unsigned int n, size_t& steps)
{
	steps++;
	if (n >= 2)
	{
		double f = f2; f2 += f1; f1 = f;
		fib(f1, f2, n - 1,steps);
	}
};

double Fibonaci(unsigned int n, size_t& steps)
{
	double f0 = 0, f1 = 1;
	switch (n)
	{
	case 0:
		return f0; break;
	case 1:
		return f1; break;
	default:
		fib(f0, f1, n,steps);
		return f1;
	}
};

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
Matrix2x2 powerMatrix(Matrix2x2 a, int n, size_t& steps) {
	
	if (n == 0) return Matrix2x2{ 1,0,0,1 };
	if (n == 1) return a;
	
	else if (n % 2 == 0) {
		steps++;
		return powerMatrix(multMatr(a, a), n / 2,steps);
	}
	else {
		steps++;
		return multMatr(powerMatrix(a, n - 1,steps), a);
	}
}
//fibonacci numbers
int myfib(int n, size_t& steps) {

	Matrix2x2 a{ 1,1,1,0 };
	Vector2 v{ 1,0 };

	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		Matrix2x2 b = powerMatrix(a, n - 1,steps);
		Vector2 res = multVect(v, b);
		return res._2;
	}

}