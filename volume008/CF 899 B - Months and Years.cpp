#include <iostream>
using namespace std;

// �ˬd�qs��}�l��n�Ӥ�Amonth�����ѼƬO�_�P���w��days�����ѼƤ@�P 
bool check(int month[12], int s, int n, int *days)
{
	for(int i = 0, m = s; i < n; ++i, ++m)
	{
		// m��12���l�ƫO�Ҥ���b�X�k�d�� 
		if(month[m % 12] != days[i])
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
	int N, days[24];
	// ������J�F�X��29�A�b24�Ӥ뤤���i�঳�W�L�@�Ӫ�29�� 
	int flag = 0;
	// ���`��~���C��Ѽ� 
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	// ��J��� 
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		// ��J�Ѽ� 
		cin >> days[i];
		
		// ��29�Ѫ��ܡA�⦸�ưO�_�� 
		if(days[i] == 29)
		{
			++flag;
			// �M��վ㦨28�ѡA�]��2��u���s��⦸29�ѬO���i�઺�A��L���p�S���ϧO 
			days[i] = 28;
		}
	}
	
	// ����ӥH�W��29�ѡA���i�� 
	if(flag > 1)
	{
		cout << "NO" << endl;
	}
	else
	{
		bool suc = false;
		// �ոլݨC�Ӱ_�l��� 
		for(int i = 0; i < 12; ++i)
		{
			if(check(month, i, N, days))
			{
				suc = true;
				break;
			}
		}
		
		// ��X 
		cout << (suc ? "YES" : "NO") << endl;
	}

    return 0;
}

