#include <iostream>
#include <algorithm>
using namespace std;

// �w�q�}�C�̤j�ؤo 
#define AMAX (int)(1e5 + 5)

int main()
{
	int N, A[AMAX];
	
	// ��J 
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	// �Ƨ� 
	sort(A, A + N);
	
	// �S�X�{���Ʀr���]��1 
	int ans = 1;
	for(int i = 0; i < N; ++i)
	{
		// �Y�O�i�H�ܦ��o�Ʀr�A�N��ܳo�Ʀr�|�X�{�A�⤣�|�X�{���Ʀr�[1 
		if(A[i] >= ans)
		{
			++ans;
		}
	}
	
	// ��X 
	cout << ans << endl;

    return 0;
}

