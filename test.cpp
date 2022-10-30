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


<일정 완료>

void TodoItemComplete(TodoItemRef item){   // 일정 완료 버튼을 누르면 완료 상태로 변경
    item->completed = true;   // 일정 일반 상태에서 완료 상태로 변경하는
}
