#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, A[100];
	// ��J 
	cin >> N >> M;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	// �Ѥp�ƨ�j�A�]���t���U�h�ȱo�U�h 
	sort(A, A + N);
	
	// ��eM�ӭt�ƥ[�_�ӡA�]�����O�@�w�n���A�ҥH���O�t�����Υ[ 
	int res = 0;
	for(int i = 0 ; i < M; ++i)
	{
		if(A[i] < 0)
		{
			res += A[i];
		} 
	} 
	
	// ��X 
	cout << -res << endl;

    return 0;
}

