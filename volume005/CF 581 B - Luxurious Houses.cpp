#include <iostream>
using namespace std;

// �w�q�}�C�̤j�ؤo 
#define AMAX (int)(1e5 + 5)

int main()
{
	int N, H[AMAX], ans[AMAX], highest = 0; 
	
	// ��J 
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> H[i];
	}
	
	// �q�k��}�l�M�w���� 
	for(int i = N - 1; i >= 0; --i)
	{
		// ���p���ثe����̰����ؿv���٧C�Τ@�˰��A�N�[���A���M�N���[ 
		ans[i] = (H[i] <= highest ? highest + 1 - H[i] : 0);
		
		// �ݯण���s�̰����� 
		if(H[i] > highest)
		{
			highest = H[i];
		}
	}
	
	// ��X 
	for(int i = 0; i < N; ++i)
	{
		if(i != 0)
		{
			cout << " ";
		}
		cout << ans[i];
	}
	cout << endl;

    return 0;
}

