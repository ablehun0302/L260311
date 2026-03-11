#include <iostream>
#include "StringUtil.h"

using namespace std;

int main()
{
	// 숫자 입력 받아서 그걸 크기로 숫자 배열을 만들어서
	// 1부터 크기까지 초기화 하고 출력하는 프로그램 만들어보슈.
	int Size = 0;
	
	cin >> Size;

	int* DArray = new int[Size];
	
	for (int i = 0; i < Size; i++)
	{
		DArray[i] = i + 1;
		
		cout << DArray[i] << endl;
	}

	// 할당 해제
	delete[] DArray;
	DArray = nullptr;

	return 0;
}