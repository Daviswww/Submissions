#include <iostream>
using namespace std;

int main()
{
	int N, M;
	bool left = false;
	
	// ��J 
	cin >> N >> M;
	
	for(int i = 0; i < N; ++i)
	{
		// �_�Ʀ�A������X# 
		if(i % 2 == 0)
		{
			for(int j = 0; j < M; ++j)
			{
				cout << "#";
			}
		}
		// ���Ʀ� 
		else
		{
			// ���쥪��L# 
			if(left)
			{
				cout << "#";
			}
			
			// �LM - 1��. 
			for(int j = 0; j < M - 1; ++j)
			{
				cout << ".";
			}
			
			// ����k��L# 
			if(!left)
			{
				cout << "#";
			}
			
			left = !left;
		}
		
		// ���� 
		cout << endl;
	} 

    return 0;
}

