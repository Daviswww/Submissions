#include <iostream>
using namespace std;

int main()
{
	int N, P[100], temp;
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{		
		// ��J 
		cin >> temp;
		// P[����§�����H] = �e§���H 
		P[temp - 1] = i + 1;
	}
	
	// ��X 
	for(int i = 0; i < N; ++i)
	{
		if(i != 0)
		{
			cout << " ";
		}
		
		cout << P[i];
	}
	cout << endl;

    return 0;
}

