#include <iostream>
#include <algorithm>
using namespace std;

// �w�q�}�C�̤j�ؤo 
#define AMAX (int)(1e2 + 7)

int N, M, A, c[AMAX], ans;

// �ˬd�ण��Yd�� 
bool check(int d)
{
	// 0�Ѥ����ˬd�A�@�w�� 
	if(d == 0)
	{
		return true;
	}
	
	// �n��N�ӤH�Y 
	int t = N;
	for(int i = 0; i < AMAX; ++i)
	{
		// �p���i�ح����൹�X�ӤH�Y�A�����Ӽƶq 
		t -= c[i] / d;
	}
	
	// �������Y 
	return (t <= 0);
}

// �G���j�M�k 
void bsearch(int l, int r)
{
	// �S�o��F�A���� 
	if(l > r)
	{
		return;
	}
	
	// �䤤���� 
	int mid = (l + r) / 2;
	// �i�H 
	if(check(mid))
	{
		// �����̤j�� 
		if(mid > ans)
		{
			ans = mid;
		}
		
		// ���j���� 
		bsearch(mid + 1, r);
	}
	// ���� 
	else
	{
		// ���p���� 
		bsearch(l, mid - 1);
	}
}

int main()
{	
	// ��J 
	cin >> N >> M;
	fill(c, c + N, 0);
	
	// ���K�O������ 
	for(int i = 0; i < M; ++i)
	{
		cin >> A;
		++c[A];
	}
	
	// �j�M 
	ans = 0;
	bsearch(0, M);
	
	// ��X 
	cout << ans << endl;

    return 0;
}

