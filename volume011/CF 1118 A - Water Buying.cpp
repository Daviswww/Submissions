#include <iostream>
using namespace std;

int main()
{
	int Q;
	cin >> Q;
	for(int q = 0; q < Q; ++q)
	{
		long long N, A, B, ans = 0;
		cin >> N >> A >> B;
		
		// �_�ƪ��ܥ��R�@��1���ܦ����� 
		if(N % 2 != 0)
		{
			ans += A;
		}
		
		// �ѤU��������Ө�ӶR�A�ݬO���1���K�y�٬O�@��2���K�y 
		A *= 2;
		if(A < B)
		{
			ans += N / 2 * A;
		}
		else
		{
			ans += N / 2 * B;
		}
		
		cout << ans << endl;
	}

    return 0;
}

