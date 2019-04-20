#include <iostream>
using namespace std;

int N, A, B;

// �P�_���S����k�C�Hn���J�|
bool check(int n)
{
	// ��س��n��ܤ֤����@�ӤH�A�`�L�ƭn�j�󵥩�H�� 
	return (A >= n && B >= n && N <= (A / n + B / n));
}

// �j�M�C�@�L�̦h�X���J�| 
int bsearch(int l, int r)
{
	// �d�򤣦X�k�A�j�M���� 
	if(l > r)
	{
		return 0;
	}
	
	// �j�Mmid 
	int mid = (l + r) / 2, ret;
	// �C�Lmid���i�H
	if(check(mid))
	{
		// ���j���� 
		ret = bsearch(mid + 1, r);
		// �^�Ǥ���j�� 
		return (mid > ret ? mid : ret);
	}
	// ���i�H 
	else
	{
		// ���p���� 
		return bsearch(l, mid - 1);
	}
	
	return 0;
}

int main()
{	
	cin >> N >> A >> B; 
	
	// �C�ӤH�ܤ�1���A�̦h100	
	cout << bsearch(1, 100) << endl;

    return 0;
}

