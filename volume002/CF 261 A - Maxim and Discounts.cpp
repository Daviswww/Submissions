#include <iostream>
#include <algorithm>
using namespace std;

// �j�ƨ�p 
bool comp(int a, int b)
{
	return a > b;
}

int main()
{
	int M, Q = 100000, N, A[100000];
	cin >> M;
	// �u�n�O�n�R�̤֭Ӫ��u�f�N�n 
	for(int i = 0; i < M; ++i)
	{
		int temp;
		cin >> temp;
		
		if(temp < Q)
		{
			Q = temp;
		}
	}
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	// �q�Q���ƨ�K�y�� 
	sort(A, A + N, comp);
	
	// ��Q�ӭn�I�����A�A��2�Ӥ��Ϊ��A���ƨ�R������ 
	int ans = 0;
	for(int i = 0; i < N;)
	{
		for(int j = 0; j < Q && i < N; ++j, ++i)
		{
			ans += A[i];
		}
		
		for(int j = 0; j < 2 && i < N; ++j, ++i);
	}
	
	cout << ans << endl;

    return 0;
}

