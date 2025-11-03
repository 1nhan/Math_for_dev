#include "Vector.h"

#include<iostream>
using namespace std;

auto main(int argc, char** arge) -> int {
	Point p;  //( 1, 0 )
	p.x = 1;
	p.y = 0;

	Vector v; //( 2, 3 )
	v.x = 2;
	v.y = 3;

	Point p2 = p.AddVector(v);

	cout << "result: " << p2.x << ", " << p2.y << '\n'; //( 3, 3 )

	Point i;	//( 1, 1 )
	i.x = 1;
	i.y = 1;

	v = p - i;
	
	float length = v.Length();	// 벡터 V 크기를 연산.

	cout << "result: " << v.x << ", " << v.y << '\n'<<"이때 벡터 V의 크기: "<<length<<'\n';

	return 0;
}