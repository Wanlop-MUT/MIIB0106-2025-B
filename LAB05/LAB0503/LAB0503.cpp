#include <iostream>
#include <string>
using namespace std;
void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "in swap function, after swapping : " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
		
	
}
void swapref(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "in swap function, after swapping : " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main() {
	int a, b;
	cout << "Enter a integer : ";
	cin >> a;
	cout << "Enter b integer : ";
	cin >> b;
	cout << "Before swapping in main function: " << endl;
	cout << "a = " << a << "b = " << b << endl;
	swap(a, b);
	cout << "a = " << a << "b = " << b << endl;
	swapref(a, b);
	cout << "a = " << a << "b = " << b << endl;

	


	return 0;
}