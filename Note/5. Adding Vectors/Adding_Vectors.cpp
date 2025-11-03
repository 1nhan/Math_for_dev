#include "Vector.h"
#include<iostream>
using namespace std;
auto main() -> int
{
	Vector right(4,0); //오른쪽으로 4만큼	을 의미합니다.
	Vector down(0,-5); //아래로 5만큼을 의미합니다.

	Vector v = right + down;

	cout << "p's new velocity: " << v.x << ", " << v.y << ")" << '\n';
	return 0;
}