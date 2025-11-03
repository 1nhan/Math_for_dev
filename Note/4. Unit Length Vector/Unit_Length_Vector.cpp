#include "Vector.h"
#include <iostream>
using namespace std;

auto main() -> int
{
	Point i{ 3, 4 };	// i (3,4)
	Point p{ 1, 2 };	// p (1,2)

	Vector pi = i - p;	// 두점 사이의 벡터 (2,2)
	
	Vector nomalized = pi.Nomalized();	/* 
	*/

	cout << "p의 view vector: (" << nomalized.x << ", " << nomalized.y << ")" << '\n';
	cout << "p의 view length: " << nomalized.Length() << '\n';
	return 0;
}