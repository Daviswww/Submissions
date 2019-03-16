#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, K;
	string sea[105];
	cin >> N >> K;
	for(int i = 0; i < N; ++i)
	{
		cin >> sea[i];
	}
	
	// M�O�̰����i��ʦ��ơAMX�BMY�O�y�� 
	int M = 0, MX, MY;
	int p[105][105];
	// ���إߤ@�Ӱ}�C�A�k0�A�ΨӦs��X�{���� 
	for(int i = 0; i < N; ++i)	
	{
		for(int j = 0; j < N; ++j)
		{
			p[i][j] = 0;
		}
	}
	
	// �]��O������p 
	for(int i = 0; i < N; ++i)	
	{		
		for(int j = 0; j < N - K + 1; ++j)
		{
			// ���]��O��A�ӥB�̥��䨺��O(i, j)
			
			// �P�_�k��O���O�����ө�� 
			bool dot = true;
			for(int a = 0; a < K; ++a)
			{
				if(sea[i][j + a] == '#')
				{
					dot = false;
				}
			}
			
			// �����A��o�@�q�����Ƴ��[1 
			if(dot)
			{
				for(int a = 0; a < K; ++a)
				{
					++p[i][j + a];
					
					if(p[i][j + a] > M)
					{
						M = p[i][j + a];
						MX = i;
						MY = j + a;
					}
				}
			}
		}
	}
	
	// �]��O���������p 
	for(int j = 0; j < N; ++j)	
	{		
		for(int i = 0; i < N - K + 1; ++i)
		{
			// ���]��O�����A�ӥB�̤W������O(i, j)
			
			// �P�_�U���O���O�����ө�� 
			bool dot = true;
			for(int a = 0; a < K; ++a)
			{
				if(sea[i + a][j] == '#')
				{
					dot = false;
				}
			}
			
			// �����A��o�@�q�����Ƴ��[1 
			if(dot)
			{
				for(int a = 0; a < K; ++a)
				{
					++p[i + a][j];
					
					if(p[i + a][j] > M)
					{
						M = p[i + a][j];
						MX = i + a;
						MY = j;
					}
				}
			}
		}
	}
	
	cout << MX + 1 << " " << MY +1 << endl;

    return 0;
}

