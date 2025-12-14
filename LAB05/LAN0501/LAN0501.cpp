#include <iostream>
#include <string>
using namespace std;
int maxofThree(int a, int b, int c) {
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
}
int minofThree(int A, int B, int C) {
	int min = A;
	if (B < min) {
		min = B;
	}
	if (C < min) {
		min = C;
	}
	return min;
}
int main() {
	int a, b, c;
	
	cout << "Enter a three integers: ";
	cin >> a;
	cout << "Enter b the second integer: ";
	cin >> b;
	cout << "Enter c the third integer: ";
	cin >> c;
	cout << "The maximum value is: " << maxofThree(a, b, c) << endl;
	cout << "The minimum value is: " << minofThree(a, b, c) << endl;

	




	return 0;
}

