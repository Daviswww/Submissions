#include <iostream>
using namespace std;

int main()
{
	// �ܤ֦��@�q 
	int N, res = 1, mag, pre;
	
	// ����J�ƶq��Ĥ@�� 
	cin >> N >> pre;
	for(int i = 1; i < N; ++i)
	{
		// ��J���� 
		cin >> mag;
		// ��e����V���@�˴N�����_�� 
		if(mag != pre)
		{
			// �[�@�q 
			++res;
		}
		
		// �O���e�@�ڪ���V 
		pre = mag;
	}
	
	// ��X 
	cout << res << endl;

    return 0;
}

