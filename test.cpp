#include <iostream>
using namespace std;

class Circle {
public:

	int radius;
	float area();
};

float Circle::area() {
	return radius * radius * 3.14;
}

void main() {
	Circle cir1;
	cout << "원의 반지름은?";
	cin >> cir1.radius;

	cout << "원의 면적은 " << cir1.area() << "입니다.";
}