#include <iostream>
using namespace std;

int main()
{
	int N;
	
	// ��J 
	cin >> N;
	
	// �h�]�@�ӷ��� 
	for(int i = 0; i <= N; ++i)
	{
		// �Ĥ@�ӡA�e���S that 
		if(i == 0)
		{
			cout << "I hate ";
		}
		// �̫�@�ӡA�u�� it 
		else if(i == N)
		{
			cout << "it";
		}
		// �ĩ_�ƭӡA��X hate 
		else if(i % 2 == 0)
		{
			cout << "that I hate ";
		}
		// �İ��ƭӡA��X love 
		else
		{
			cout << "that I love ";
		}
	}
	cout << endl;

    return 0;
}

