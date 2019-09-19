#include <iostream>
using namespace std;

int T[100000], N, ans;

// ��e�׬�n���ɭԦ��S���������� 
bool find(int n)
{
	// �e�פ��O���Ƥ��i�� 
	if(n % 2 != 0)
	{
		return false;
	}
	
	// �s�����k��U�ۦ��X��0��1 
	int l[2], r[2];
	for(int i = 0; i < 2; ++i)
	{
		l[i] = 0;
		r[i] = 0;
	}
	
	//  ���� 
	for(int i = 0; i < n / 2; ++i)
	{
		++l[T[i] - 1];
	}
	
	// �k�� 
	for(int i = n / 2; i < n; ++i)
	{
		++r[T[i] - 1];
	}
	
	// �@��u��0�A�@��u��1�N�^��OK 
	if((l[0] == n / 2 && r[1] == n / 2) || (l[1] == n / 2 && r[0] == n / 2))
	{
		return true;
	}
	
	// ����� 
	for(int i = n + 1; i <= N; ++i)
	{
		// ���X����search windoe�� 
		--l[T[i - n - 1] - 1];
		// ���J����search window�� 
		++l[T[i - n / 2 - 1] - 1];
		// ���X�k��search windoe�� 
		--r[T[i - n / 2 - 1] - 1];
		// ���J�k��search window�� 
		++r[T[i - 1] - 1];
		
		// �@��u��0�A�@��u��1�N�^��OK 
		if((l[0] == n / 2 && r[1] == n / 2) || (l[1] == n / 2 && r[0] == n / 2))
		{
			return true;
		}
	}
	
	return false;
}

// ��e�װ��G���j�M�k 
void bsearch(int l, int r)
{
	// �e�פ���2���Χ� 
	if(r - l < 2)
	{
		return;
	}
	
	// �䤤���� 
	int mid = (l + r) / 2;
	// �i�H���� 
	if(find(mid))
	{
		// �ݯण���s�̤j�� 
		if(ans < mid)
		{
			ans = mid;
		}
		
		// ��ݬݯण���j 
		bsearch(mid + 1, r);
	}
	// ���઺�� 
	else
	{
		// ��p�@�I 
		bsearch(l, mid);
	}
}

int main()
{
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> T[i];
	}
	
	// ���F�T�O�e�׬O���ơA��X��N�j���A�̤p��2�������� 
	int k = 1;
	for(int i = 0; i < 32; ++i)
	{
		if(((1 << i) & N) != 0)
		{
			k = i;
		}
	}
	
	// �G���j�M 
	ans = 0;
	bsearch(0, 1 << (k + 1));
	cout << ans << endl;

    return 0;
}

