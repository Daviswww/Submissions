#include <iostream>
using namespace std;

int main()
{
	int T;
	long long A, B, K, two_step;
	
	// ��J���� 
	cin >> T;
	for(int i = 0; i < T; ++i)
	{
		// ��J 
		cin >> A >> B >> K;
		
		// �C��B�V�k�h�� 
		two_step = A - B;
		// �B�ƬO���� 
		if(K % 2 == 0)
		{
			// ��X���F�X����B 
			cout << two_step * K / 2 << endl;
		}
		// �B�ƬO�_�� 
		else
		{
			// ��X���F�X����B��A�h���@�B 
			cout << two_step * (K / 2) + A << endl;
		}
	}

    return 0;
}

