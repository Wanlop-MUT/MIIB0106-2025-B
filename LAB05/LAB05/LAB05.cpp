#include <iostream>
#include <string>
using namespace std;

double calculateArea(double radius) 
{
	const double pi = 3.14159;
	return pi * radius * radius;
}
double calculateArea(double width, double height) 
{
	double area = width * height;
	return area;
	
}


int main() {
	double radius;
	double result;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	result = calculateArea(radius);
	cout << "The area of the circle is: " << result << endl;
	//result = pi * radius * radius;
	//cout << "The area of the circle is: " << result << endl;
	//width, height;
	double width, height;
	cout << "Enter the width : ";
	cin >> width;
	cout << "Enter the height : ";
	cin >> height;
	cout << "The area of the rectangle is: " << width * height << endl;

	return 1;


}