#include <iostream>
using namespace std;

// �}�C�̤j���� 
#define AMAX (int)1e3 + 5

int main()
{
	int N, S, A[AMAX], B[AMAX];
	
	// ��J 
	cin >> N >> S;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	for(int i = 0; i < N; ++i)
	{
		cin >> B[i];
	}
	
	// �ڥ��X���h 
	if(A[0] == 0)
	{
		cout << "NO" << endl;
	}
	// �i�H���F 
	else if(A[S - 1] == 1)
	{
		cout << "YES" << endl;
	}
	// �ո���f 
	else
	{
		bool yes = false;
		// �ըC�Ӳ�S���᭱�����I 
		for(int i = S; i < N; ++i)
		{
			// �i�H��f���S�� 
			if(A[i] == 1 && B[i] == 1 && B[S - 1] == 1)
			{
				cout << "YES" << endl;
				yes = true;
				break;
			}
		}
		
		// ��f�]���� 
		if(!yes)
		{
			cout << "NO" << endl;
		}
	}

    return 0;
}

