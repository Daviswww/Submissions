#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string str;
	
	// ��J 
	cin >> str;
	
	// �p��a���ƶq 
	int a = 0;
	for(int i = 0; i < str.length(); ++i)
	{
		if(str[i] == 'a')
		{
			++a;
		}
	}
	
	// �������̦ܳh��2 * a + 1�A�����N���{�b������ 
	cout << min(2 * a - 1, (int)str.length()) << endl;

    return 0;
}

