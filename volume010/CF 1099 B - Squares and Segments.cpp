#include <iostream>
using namespace std;

int main()
{
	int N, ans = 2, t = 1;
	cin >> N;
	
	// ����1�A�@�}�l2���䦳1�� 
	--N;
	// �٦���l�񤣶i�h 
	while(N > 0)
	{
		// �k��[�@�ơA�h�@���� 
		N -= t;
		++ans;
		
		// ���F���ܵ��� 
		if(N <= 0)
		{
			break;
		}
		
		// �U���[�@�ơA�h�@���� 
		++t;
		N -= t;
		++ans;
	}
	
	cout << ans << endl;

    return 0;
}

