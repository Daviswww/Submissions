#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long N, A, B, s[100000], S = 0;

	// ��J	
	cin >> N >> A >> B;
	for(int i = 0; i < N; ++i)
	{		
		cin >> s[i];
		// �[�` 
		S += s[i];
	}
	
	// �ƧǲĤ@�ӥH�~�� 
	sort(s + 1, s + N);
	
	// �q�᭱(�j��)�}�l 
	int ans = 0, last = N - 1;
	// ����������N�~�� 
	while(s[0] * A < S * B)
	{
		// ����@�Ӳ{�b�̤j���} 
		S -= s[last--];
		// �����ƶq�[1 
		++ans;
	}
	
	// ��X 
	cout << ans << endl;

    return 0;
}

