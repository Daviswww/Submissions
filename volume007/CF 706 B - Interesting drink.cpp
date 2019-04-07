#include <iostream>
#include <algorithm>
using namespace std;

int N, X[100000], ans;

// �G���j�M�k 
void bsearch(int m, int l, int r)
{
	// �S���e�A���� 
	if(l >= r)
	{
		return;
	}
	
	// ������ 
	int mid = (l + r) / 2;
	// ���p�񤤶��j 
	if(m >= X[mid])
	{
		// �ݯण���s�̤j�� 
		if(mid + 1 > ans)
		{
			ans = mid + 1;
		}
		
		// ��ݬݯण���j 
		bsearch(m, mid + 1, r);
	}
	// �񤤶��p 
	else
	{
		// ��p�@�I 
		bsearch(m, l, mid);
	}
	
}

int main()
{
	int Q, M;
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> X[i];
	}

	// �q�p�ƨ�j 
	sort(X, X + N);
	
	cin >> Q;
	for(int i = 0; i < Q; ++i)
	{
		// ��J 
		cin >> M;
		ans = 0;
		// �j�M 
		bsearch(M, 0, N);
		cout << ans << endl;
	}

    return 0;
}

