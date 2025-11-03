#include "Vector.h"
#include<iostream>
using namespace std;

auto main() -> int
{
	Point p;	//( 5, 2 )
	p.x = 5;
	p.y = 2;

	Point i;	//( 0, 0 )
	i.x = 0;
	i.y = 0;
	
	Point c;	//( 8, 8 )
	c.x = 8;
	c.y = 8;

	Vector cp;	// 점 c에서 점 p로 가는 벡터
	Vector ip;	// 점 i에서 점 p로 가는 벡터

	cp = p - c;	
	ip = p - i;

	float length_sqr_cp = cp.LengthSqr();	// cp의 거리를 출력하는 연산
	float length_sqr_ip = ip.LengthSqr();	// ip의 거리를 출력하는 연산 

	cout << "length_sqr_cp :" << length_sqr_cp << '\n';
	cout << "length_sqr_ip :" << length_sqr_ip << '\n';

	return 0;
}