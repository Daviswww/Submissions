#include <iostream>
#include <algorithm>
using namespace std;

// �s�־��s����n�Ǫ��Ѽ� 
struct Instrument
{
	int index;
	int days;
};

// ����禡�A�̤ѼƤp��j 
bool comp(Instrument a, Instrument b)
{
	return a.days < b.days;
}

int main()
{
	int N, K;
	Instrument A[100];
	cin >> N >> K;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i].days;
		// �����s�� 
		A[i].index = i + 1;
	}
	
	// �̤ѼƤp�ƨ�j 
	sort(A, A + N, comp);
	
	int ans = 0;
	// �٦����ǦӥB�ٯ�Ǫ��ܴN�~�� 
	while(ans < N && K >= A[ans].days)
	{
		K -= A[ans].days;
		++ans;
	}
	
	cout << ans << endl;
	for(int i = 0; i < ans; ++i)
	{
		if(i != 0)
		{
			cout << " ";
		}
		cout << A[i].index;
	}
	cout << endl;

    return 0;
}

