
double power(double x, int a) {
	double res = x;
	int i = 1;
	int steps = 0;
	while (i < a) {
		res = res * x;
		i++;
		steps++;
	}
	return steps;
}

double powerRec(double x, int a) {
	double res = 1;
	int steps = 0;
	steps++;
	if (a == 1) {
		return steps;

	}
	else {
		//a--;
		return (x * powerRec(x, a - 1));

	}

}

double quickPowerRec(double x, int a) {
	int steps = 0;
	
	if (a == 1) {
		return x;
	}
	if (a % 2 == 0) {
		x= quickPowerRec(x * x, a / 2);
		steps++;
	}
	x= x * quickPowerRec(x * x, a / 2);
	steps++;
	return steps;
}

double quickPower(double x, int a) {
	int res = 1;
	int steps = 0;

	while (a) {
		if (a & 1) {
			res *= x;
			--a;
		}
		else {
			x *= x;
			a >>= 1;
		}
		steps++;
	}
	return steps;
}
