#include <iostream>
using namespace std;

// �s�C���Ϊ��ֿn���� 
int A[100005];

// �G���j�M�k
// q�O�n�䪺index�Al�O�j�M�U���Ar�O�j�M�W�� 
int bsearch(int q, int l, int r)
{
	// �u�Ѥ@�檺�ܴN�O�o��F�A�]���@�w������ 
	if(l == r - 1)
	{
		return l;
	}
	
	// ����������m 
	int mid = (l + r) / 2;
	// �b��������m�A���F 
	if(A[mid - 1] < q && q <= A[mid])
	{
		return mid;
	}
	// �b���� 
	else if(q <= A[mid - 1])
	{
		return bsearch(q, l, mid);
	}
	// �b�k�� 
	else
	{
		return bsearch(q, mid, r);
	}
	
	return -1;
}

int main()
{
	int N;
	cin >> N;
	
	// ��J�C���Ϊ����סA�M���ܦ��֥[���� 
	A[0] = 0;
	for(int i = 1; i <= N; ++i)
	{
		cin >> A[i];
		A[i] += A[i - 1];
	}
	
	// ��J�C�Ӭd�ߡA��X�d�ߪ����G 
	int M, query;
	cin >> M;
	for(int i = 0; i < M; ++i)
	{
		cin >> query;
		cout << bsearch(query, 0, N + 1) << endl;
	}

    return 0;
}

