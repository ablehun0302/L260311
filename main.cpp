#include <iostream>

using namespace std;

/// <summary>
/// 문자열 문자 갯수 세기
/// </summary>
/// <param name="String">문자열</param>
/// <returns>문자열 갯수</returns>
int StringLength(char* String)
{
	int length = 0;

	for (int i = 0; ; i++)
	{
		if (String[i] == '\0')
		{
			break;
		}
		length++;
	}

	return length;
}

/// <summary>
/// 문자열에서 특정 문자를 다른 문자로 바꾸기
/// </summary>
/// <param name="String">문자열</param>
/// <param name="OldWord">변경할 문자</param>
/// <param name="NewWord">새로운 문자</param>
void WordSwap(char* String, char OldWord, char NewWord)
{
	for (int i = 0; i < StringLength(String); i++)
	{
		if (String[i] == OldWord)
		{
			String[i] = NewWord;
		}
	}	
}

/// <summary>
/// 문자열에서 단어 찾기
/// </summary>
/// <param name="String">문자열</param>
/// <param name="SearchWord">찾을 단어</param>
/// <returns>단어 위치</returns>
int SearchWord(char* String, char SearchWord)
{
	for (int i = 0; i < StringLength(String); i++)
	{
		if (String[i] == SearchWord)
		{
			return i + 1;
		}
	}
	return -1;
}

int main()
{
	char String[100] = { 'H','E','L','l','O',' ','W','o','r','l','d','\0'};

	cout << String << endl;
	cout << StringLength(String) << endl;

	WordSwap(String, 'l', '5');

	cout << String << endl;
	cout << SearchWord(String,'5') << endl;

	return 0;
}