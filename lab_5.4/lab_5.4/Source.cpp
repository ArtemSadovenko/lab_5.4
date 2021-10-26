#include <iostream>
#include <cmath>

using namespace std;

double func0(int k, int n);
double func1(int k, int n, int i);
double func2(int k, int n, int i);
double func3(int k, int n, int i, double t);
double func4(int k, int n, int i, double t);

int main() {
	int n = 15;
	int k;

	cout << "k = "; cin >> k;

	cout << func0(k, n) << endl << func1(k, n, k) << endl << func2(k, n, n) << endl << func3(k, n, k, 0) << endl << func4(k, n, n, 0) << endl;

	return 0;
}

double func0(int k, int n) {
	double s = 0.;
	for (int i = k; i <= n; i++) {
		s += 1.0 * cos(i) / (1.0 + pow(sin(i), 2));
	}
	return s;
}

double func1(int k, int n, int i) {
	if (i > n)
		return 0;
	else  
		return 1.0 * cos(i) / (1.0 + pow(sin(i), 2)) + func1(k, n, i+1);
}

double func2(int k, int n, int i) {
	if (i < k)
		return 0;
	else
		return 1.0 * cos(i) / (1.0 + pow(sin(i), 2)) + func2(k, n, i - 1);
}

double func3(int k, int n, int i, double t) {
	t += 1.0 * cos(i) / (1.0 + pow(sin(i), 2));
	if (i >= n)
		return t;
	else
		return func3(k, n, i + 1, t);
}

double func4(int k, int n, int i, double t) {
	t += 1.0 * cos(i) / (1.0 + pow(sin(i), 2));
	if (i <= k)
		return t;
	else
		return func4(k, n, i - 1, t);
}