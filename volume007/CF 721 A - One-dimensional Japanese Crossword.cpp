#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	string str;
	cin >> N >> str;
	
	// len�O�¦�ϰ쪺���סAans�O���X�Ӷ¦�ϰ� 
	int ans = 0, len[105];
	for(int i = 0; i < N; ++i)
	{
		// �J��¦� 
		if(str[i] == 'B')
		{
			// ���k0 
			len[ans] = 0;
			// �]�줣�O�¦⬰�� 
			while(str[i] == 'B')
			{
				++i;
				++len[ans];
			}
			// �W�[�@�Ӷ¦�ϰ� 
			++ans;
		}
	}
	
	// ��X 
	cout << ans << endl;
	for(int i = 0; i < ans; ++i)
	{
		if(i != 0)
		{
			cout << " ";
		}
		
		cout << len[i];
	}
	cout << endl;

    return 0;
}

