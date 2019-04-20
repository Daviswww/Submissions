#include <iostream>
using namespace std;

int N, M, B[100];

// �P�_�̦hn�H�ɧ������o�U 
bool sit(int n)
{
	// ��ӨӪ�M�ӤH 
	int p = M;
	// �]�Ҧ��Ȥl 
	for(int i = 0; i < N; ++i)
	{
		// �������ܧ�H�ɤW 
		p -= (B[i] < n ? n - B[i] : 0);
		
		// �H�Χ��F�A���o�U 
		if(p <= 0)
		{
			return true;
		}
	}
	
	// �����U 
	return false;
}

// �j�M�̦h���Ȥl�̤֧��h�֤H�ɧ����U
int bsearch(int l, int r)
{
	// �d�򤣦X�k�A�j�M���� 
	if(l > r)
	{
		return 99999;
	}
	
	// �j�Mmid 
	int mid = (l + r) / 2, ret = 99999;
	// �C�i�̦hmid�ӤH���o�U 
	if(sit(mid))
	{
		// ���p���� 
		ret = bsearch(l, mid - 1);
		// �^�Ǥ���p�� 
		return (ret < mid ? ret : mid);
	}
	// �����U 
	else
	{
		// ���j���� 
		return bsearch(mid + 1, r);
	}
	
	return 99999;
}

int main()
{	
	int mini = 99999, maxi = 0;

	// ��J 
	cin >> N >> M;
	for(int i = 0; i < N; ++i)
	{
		cin >> B[i];
	
		// �O��̤j��	
		if(B[i] > maxi)
		{
			maxi = B[i];
		}
	}
	
	// �̤j�Ȥ��i���쥻�̤j���٤p�A���i���������W�쥻�̤j���٤j�A�]���j�Mmaxi ~ maxi + M
	mini = bsearch(maxi, maxi + M);
	// �̤j�ȴN�O�������b�쥻�̤j�� 
	maxi += M;
	
	// ��X 
	cout << mini << " " << maxi << endl;

    return 0;
}

