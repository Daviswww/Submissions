#include <iostream>
using namespace std;

int main()
{
	int N, D[100], A, B, res = 0;
	
	// ��J���żƶq 
	cin >> N;
	for(int i = 0; i < N - 1; ++i)
	{
		// ��J�ɯŻݭn���~ 
		cin >> D[i];
	}
	// ��J�n�qA�ɨ�B 
	cin >> A >> B;
	
	// �֥[�ݭn���~ 
	for(int i = A - 1; i < B - 1; ++i)
	{
		res += D[i];
	}
	
	// ��X 
	cout << res << endl;

    return 0;
}

