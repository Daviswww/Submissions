#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, A[100000];
	
	// ��J 
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	// �Ƨ� 
	sort(A, A + N);
	
	// �Ĥ@�Ӫ����P�_�A���K�O���_�� 
	int ans = (A[0] == 0 ? 0 : 1), pre = A[0];
	for(int i = 1; i < N; ++i)
	{
		// ��e�@�Ӥ��@�˦ӥB���O0�N�[�@�� 
		if(A[i] != pre && A[i] != 0)
		{
			++ans;
		}
		
		// �O���e�@�Ӫ��Ʀr 
		pre = A[i];
	}
	
	// ��X 
	cout << ans << endl;

    return 0;
}

