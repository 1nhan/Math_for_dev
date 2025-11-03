#include "Vector.h"
#include <iostream>
using namespace std;

auto main() -> int
{
	Vector v(5, 5);	// 생성자를 사용해 ( 5, 5 )로 초기화
	cout << "초기 속도: " << v.Length() << '\n';
	
	Vector doubled = v * 2;	// 오버로드된 *연산자호출하여 연산

	cout << "2배 속도: " << doubled.Length()<< '\n';

	Vector halved = v / 2;	// 오버로드된 /연산자 호출하여 연산

	cout << "1/2배 속도: " << halved.Length()<< '\n';

	return 0;
}