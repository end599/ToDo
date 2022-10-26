#include <iostream>
using namespace std;

class Circle {
public:

	int radius;
	double area();
};

double Circle::area() {
	return radius * radius * 3.14;
}

void main() {
	Circle cir1;
	cout << "?";
	cin >> cir1.radius;

	cout << "f" << cir1.area() << "123.";
}