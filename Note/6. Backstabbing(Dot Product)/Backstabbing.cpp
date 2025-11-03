#include "Vector.h"
#include <iostream>
using namespace std;

auto main()->int
{
	float fldamage = 0;
	Vector r{1,1};	
	Vector br{-1,-1};
	if (Dotproduct(r, br) < -0.5f)
	{// 내적이 성립한다면. 하지만 -1의 값은 정확히 반대편에서 나오는 값이기 
	// 때문에 게임적 여유분을 준 -0.5의 값
		fldamage = 999999; //즉사의 데미지
		cout << fldamage << '\n';//성립했다면 출력
		return 0;
	}
	cout << fldamage << '\n';//성립이 안되면 0값.
	return 0;
}