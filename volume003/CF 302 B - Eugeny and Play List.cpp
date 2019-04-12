#include <iostream>
using namespace std;

int N, M, S[100005], V, ans;

//  �G���j�M 
void bsearch(int l, int r)
{
	// �S���e�i�j�F 
	if(l > r)
	{
		return;
	}
	
	// �j�M�I 
	int mid = (l + r) / 2;
	// ���F 
	if(S[mid - 1] < V && V <= S[mid])
	{
		ans = mid;
		return;
	}
	// �b���� 
	else if(V <= S[mid - 1])
	{
		bsearch(l, mid - 1);
	}
	// �b�k�� 
	else
	{
		bsearch(mid + 1, r);
	}
}

int main()
{
	int C, T;
	
	cin >> N >> M;
	S[0] = 0;
	for(int i = 1; i <= N; ++i)
	{
		// ��J 
		cin >> C >> T;
		// �֥[ 
		S[i] = S[i - 1] + C * T;
	}
	
	for(int i = 0; i < M; ++i)
	{
		// ��J�j�M�ؼ� 
		cin >> V;
		ans = N;
		// �j�M 
		bsearch(1, N);
		// ��X 
		cout << ans << endl;
	}

    return 0;
}

