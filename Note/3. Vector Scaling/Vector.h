#pragma once

#include<math.h>

class Vector {
public:
	Vector() :x{ 0.0 }, y{ 0.0 } {}// 생성자로 x,t값 초기화 
	Vector(float X, float Y) : x{ X }, y{ Y } {} // 생성자로 x,t값 초기화 

	float Length() const;	// Length 함수가 절대 벡터를 수정하지 않고, float을 반환합니다.
	float LengthSqr() const;// 기본적으로 동일하지만 새로운 함수
	
	Vector operator*(float s) const;	//벡터를 s만큼 빠르게 가속
	Vector operator/(float s) const;	//벡터를 s만큼 느리게 감속하는 함수
	
	float x, y;
};

float Vector::Length() const 
{	//	피타고라스 정리에 따라 x, y 성분을 이용해 벡터의 크기를 계산합니다.
	float length = 
		sqrt(x*x+y*y);
	
	return length; // |V| = √(Vx² + Vy²)
}
float Vector::LengthSqr() const
{
	float length = x*x+y*y;
	
	return length; // |V| = (Vx² + Vy²)
}
Vector Vector::operator*(float s) const
{ // ex. 2V = ((Vx*2),(Vy*2))
	Vector scaled;
	scaled.x = x * s;
	scaled.y = y * s;

	return scaled;
}
Vector Vector::operator/(float s) const
{ // ex. V/2 = ((Vx/2),(Vy/2))
	Vector scaled;
	scaled.x = x / s;
	scaled.y = y / s;

	return scaled;
}

class Point {
public:
	Point AddVector(Vector v);
	float x, y;
};

Point Point::AddVector(Vector v)
{// P` = ( PxVx, PyVy);
	Point p2;
	p2.x = x + v.x; // PxVx.. 현재위치 + 벡터의 값(속도, 방향).
	p2.y = y + v.y; // PyVy..

	return p2;
}

Vector operator-(Point a, Point b)
{	// 오직 두점이 있을때만 사용하는 함수
	// 두 점을 빼서 Vector를 반환하는 연산자 오버로딩
	Vector v;
	v.x = a.x - b.x;
	v.y = a.y - b.y;

	return v;	//V =(Px-Ix,Py-Iy);

}
	
/*
	V = (각도,방향의 정보와 길이:벡터가 얼마나 멀리 이동할 수 있는지의 정보가 담김)
	P` = P + V; (새로운 위치 = 이전 위치 + 속도)
	P` = (Px+Vx, Py+Vy)와 동일
*/


