#include <iostream>
#include <algorithm>
using namespace std;

// �w�q�}�C�̤j�ؤo 
#define AMAX (int)(1e5 + 7)

int main()
{
	int N, M, K, U[AMAX], V[AMAX], L[AMAX], mini = 2e9;
	bool s[AMAX];

	// ��J 
	cin >> N >> M >> K;
	fill(s, s + N, false);
	
	for(int i = 0; i < M; ++i)
	{
		cin >> U[i] >> V[i] >> L[i];
	}
	for(int i = 0; i < K; ++i)
	{
		int t;
		cin >> t;
		// �������ܮw������ 
		s[t] = true;
	}
	
	// �d��C�@���D�� 
	for(int i = 0; i < M; ++i)
	{
		// ���p��ݤ@�Ӧ��ܮw�@�ӨS���A�ӥB����u�A�N�O�_�� 
		if((s[U[i]] ^ s[V[i]]) && L[i] < mini)
		{
			mini = L[i];
		}
	}

	// �ܤ֦����@���N��X�̵u���A���M��X-1 
	cout << (mini == 2e9 ? -1 : mini) << endl;

    return 0;
}

