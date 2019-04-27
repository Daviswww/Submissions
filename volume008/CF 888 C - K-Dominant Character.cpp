#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// �����ܼơA��K�禡���ζǭ� 
int ans = 1e6;
string str;

// �ˬd�l�r����׬�n�ɦ��S���@�P�r��c 
bool check(int n)
{
	// �l�r�ꤤ�C�Ӧr�����X�{���� 
	int used[26];
	fill(used, used + 26, 0);
	// �Ĥ@�Ӥl�r�ꤤ�C�Ӧr�����O�_���X�{ 
	bool ini[26];
	fill(ini, ini + 26, false);
	
	// �p��Ĥ@�Ӥl�r�ꪺ��T 
	for(int i = 0; i < n; ++i)
	{
		++used[str[i] - 'a'];
		ini[str[i] - 'a'] = true;
	}
	
	// �ĤG�ӥH�᪺�l�r�� 
	for(int i = n; i < str.length(); ++i)
	{
		// �h���̥��䪺�r���A�[�J�̥k�䪺�r�� 
		--used[str[i - n] - 'a'];
		++used[str[i] - 'a'];
		
		// ���Ҧ��r 
		for(int j = 0; j < 26; ++j)
		{
			// �p�G�Ĥ@�Ӥl�r�꦳���r�A�o�Ӥl�r��S��
			if(ini[j] && used[j] == 0)
			{
				// �]�����@�P 
				ini[j] = false;
			}
		}
	}
	
	// �^�Ǧ��S���@�P�r��
	bool ret = false;
	for(int i = 0; i < 26; ++i)
	{
		 
		ret |= ini[i];
	}
	
	return ret;
}

// �G���j�M�k 
void bsearch(int l, int r)
{
	// �S���i�H�j�M���d��F�A�����j�M 
	if(l > r)
	{
		return;
	}
	
	// �P�_���� 
	int mid = (l + r) / 2;
	// �����i�H�A���p���� 
	if(check(mid))
	{
		// �����̤p�� 
		if(mid < ans)
		{
			ans = mid;
		}
		
		bsearch(l, mid - 1);
	}
	// �������i�H�A���j���� 
	else
	{
		bsearch(mid + 1, r);
	}
}

int main()
{
	// ��J 
	cin >> str;
	
	// �j�M 
	bsearch(0, str.length());
	
	// ��X 
	cout << ans << endl;

    return 0;
}

