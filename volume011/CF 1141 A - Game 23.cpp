#include <iostream>
using namespace std;

int main()
{
	int N, M;
	
	// ��J
	cin >> N >> M;
	
	// ����㰣 
	if(M % N != 0)
	{
		cout << -1 << endl; 
	}
	// �i�H�㰣 
	else
	{
		// ���o�� 
		int p = M / N, ans = 0;
		// �ݦ��X��2 
		while(p % 2 == 0)
		{
			p /= 2;
			++ans;
		}
		// �ݦ��X��3 
		while(p % 3 == 0)
		{
			p /= 3;
			++ans;
		}
		
		// ��2��3�H�~���]�� 
		if(p != 1)
		{
			cout << -1 << endl;
		} 
		else
		{
			// ��X���� 
			cout << ans << endl;
		}
	}

    return 0;
}

