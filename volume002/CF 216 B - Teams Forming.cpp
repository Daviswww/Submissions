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
	int N, A[100];
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	// �q�j�ƨ�p 
	sort(A, A + N, comp);
	
	// �ɤW�Ҧ����ͪ��t�B 
	int ans = 0;
	for(int i = 0; i < N; i += 2)
	{
		ans += A[i] - A[i + 1];
	}
	
	cout << ans << endl;

    return 0;
}

