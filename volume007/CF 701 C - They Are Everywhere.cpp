#include <iostream>
#include <string>
using namespace std;

// �Na-zA-Z������0-51 
int type(char c)
{
	if('a' <= c && c <= 'z')
	{
		return c - 'a';
	}
	
	return c - 'A' + 26;
}

// �G���j�M�k
// str�O��J���r��Atarget�O�n��쪺�r������ 
// l�O�j�M�U���Ar�O�j�M�W���A�d��O[l, r) 
int bsearch(string str, int target, int l, int r)
{	
	// ���ЭӰ}�C�A�N�Ҧ��r�����X�{�����k0 
	// mid�O�{�b�n�䪺�e�� 
	int total = 0, count[52], mid = (l + r) / 2;
	for(int i  = 0; i < 52; ++i)
	{
		count[i] = 0;
	}
	
	// n�O�H�{�b�����Ȫ��e�רӧ�ण����target�Ӧr��
	// m�O���b���Υk�b���d�򤤯���target�Ӧr�����̤p�e�� 
	// ����l�ơA�]�����i��o�Ӽe�פ���A�o�ˤ���ɤ]���|�X�� 
	int n = str.length(), m = n + 1;
	
	// �����e��mid�Ӧr�A�ݦ��S��target�ئr�� 
	for(int i = 0; i < mid; ++i)
	{
		int t = type(str[i]);
		++count[t];
		
		// �p�G�r���X�{���Ʊq0=>1 
		if(count[t] == 1)
		{
			// �h�X�{�F�@�ئr�� 
			++total;
		}
		
		// �r���ƹF��ݨD 
		if(total == target)
		{
			// �{�b���e�ץi��A�O�_�� 
			n = mid;
			// �p�G���䦳�F�� 
			if(l != r - 1)
			{
				// �ոլݯण�����p���A���j�M�W���A�դ@�� 
				m = bsearch(str, target, l, mid);
			}
			
			break;
		}
	}
	
	// �e��mid�ӧ䤣��target�ئr���A�d��n���k�� 
	for(int i = mid; i < str.length() && n != mid; ++i)
	{
		// �n�����e�׬Omid�A�ҥH�k��h�@�ӡA����N�n�֤@�� 
		
		// �k��h��@�Ӧr
		int right = type(str[i]);
		++count[right];
		
		// �p�G�r���X�{���Ʊq0=>1 
		if(count[right] == 1)
		{
			// �h�X�{�F�@�ئr�� 
			++total;
		}
		
		// ����֧�@�Ӧr 
		int left = type(str[i - mid]);
		--count[left];
		
		// �p�G�r���X�{���Ʊq1=>0 
		if(count[left] == 0)
		{
			// �֥X�{�F�@�ئr�� 
			--total;
		}
		
		// �r���ƹF��ݨD 
		if(total == target)
		{
			// �{�b���e�ץi��A�O�_�� 
			n = mid;
			// �p�G���䦳�F�� 
			if(l != r - 1)
			{
				// �ոլݯण�����p���A���j�M�W���A�դ@�� 
				m = bsearch(str, target, l, mid);
			}
			
			break;
		}
	}
	
	// �p�G�{�b���e�פ��i�� 
	if(n != mid)
	{
		// �ݬݥk���٦��S���F�� 
		if(l != r - 1)
		{
			// �ոլݥk��ण����i�H���A���j�M�U���A�դ@�� 
			m = bsearch(str, target, mid, r);
		}
	}
	
	// �^�Ǥ���p�� 
	return (n < m ? n : m);
}

int main()
{
	int N;
	string str;	
	cin >> N >> str;
	
	// ���ЭӰ}�C�A�N�Ҧ��r�����X�{�����k0 
	int total = 0, count[52];
	for(int i  = 0; i < 52; ++i)
	{
		count[i] = 0;
	}
	
	// ����ݬ��`�@���X�ئr�� 
	for(int i = 0; i < N; ++i)
	{
		int t = type(str[i]);
		++count[t];
		
		// �p�G�r���X�{���Ʊq0=>1 
		if(count[t] == 1)
		{
			// �h�X�{�F�@�ئr�� 
			++total;
		}
	}
	
	// �N�qstr����total�Ӧr���A�e�׬O[0, N]�����̤p�e�ת����G��X 
	cout << bsearch(str, total, 0, N + 1) << endl;
	
    return 0;
}

