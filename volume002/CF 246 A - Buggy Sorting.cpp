#include <iostream>
using namespace std;

int main()
{
	int N;
	
	// ��J 
	cin >> N;
	
	// ���פ���3�A��X-1 
	if(N < 3)
	{
		cout << -1 << endl;
	}
	// ���צb3�H�W�A�e������X2�A�̫�@��1 
	else
	{
		for(int i = 0; i < N - 1; ++i)
		{
			cout << "2 ";
		}
		cout << 1 << endl;
	}

    return 0;
}

