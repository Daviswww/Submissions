#include <iostream>
using namespace std;

int main()
{
	int N, S, A;
	cin >> N >> S;
	
	int sum = 0, max = 0;
	// ��J���K�[�`�A�M��N�̤j�ȰO���_�� 
	for(int i = 0; i < N; ++i)
	{
		cin >> A;
		sum += A;
		
		if(A > max)
		{
			max = A;
		}
	}
	
	// �����̤j�ȫ�OK���� 
	if(sum - max <= S)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

    return 0;
}

