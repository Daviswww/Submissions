#include <iostream>
using namespace std;

int main()
{
	long long N, K, F, T, maxi = -1e10, joy;
	
	// ��J 
	cin >> N >> K;
	for(int i = 0; i < N; ++i)
	{
		// ��J 
		cin >> F >> T;
		
		// �p��ּ֭� 
		joy = (T <= K ? F : F - (T - K));
		// �����̤j�� 
		if(joy > maxi)
		{
			maxi = joy;
		}
	} 
	
	// ��X 
	cout << maxi <<endl;

    return 0;
}

