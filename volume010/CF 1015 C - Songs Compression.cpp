#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long N, M, Max = 0, Min = 0, A, B;
	long long Compress[100000];
	
	// ��J���K�p�⧹�������Y���`�q�B�������Y���`�q�B�C�@�����Y��|�֦h�֮e�q 
	cin >> N >> M;
	for(int i = 0; i < N; ++i)
	{
		cin >> A >> B;
		Max += A;
		Min += B;
		Compress[i] = B - A;
	}
	
	// ��ֶq�q�p�ƨ�j�A��̦h���b�̫e�� 
	sort(Compress, Compress + N);
	
	// �e�q�������e�ǡA�������Y�F 
	if(M >= Max)
	{
		cout << 0 << endl;
	}
	// �������Y�F�]�����A���i�� 
	else if(M < Min)
	{
		cout << -1 << endl;
	}
	// ���Y��i�H�� 
	else
	{
		// �e�q < �{�b�`�q�N�~��A���Y�@����A�P�_ 
		long long ans = 0;
		while(M < Max)
		{
			Max += Compress[ans];
			++ans;
		}
		
		cout << ans << endl;
	}

    return 0;
}

