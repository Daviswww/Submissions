#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int ans = 1;
	// �]�Ҧ�2�H�W���]�� 
	for(int i = 2; i * i <= N; ++i)
	{
		if(N % i == 0)
		{
			// ����ڥu�[1 
			if(i * i == N)
			{
				++ans;
			}
			// ��L�[2 
			else
			{
				ans += 2;
			}
		}
	}
	
	cout << ans << endl;

    return 0;
}

