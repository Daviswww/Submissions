#include <iostream>
using namespace std;

int A, B, C;
int ans;

// �ˬd�椣�� 
bool check(int t)
{
	return (A * C <= B * (C + t));
}

// �G���j�M 
void bsearch(int l, int r)
{
	// �S���e�i�j�F 
	if(l > r)
	{
		return;
	}
	
	// �j�M�I 
	int mid = (l + r) / 2;
	// �i�H�A�A�ոե��� 
	if(check(mid))
	{
		// �����̤p�� 
		if(mid < ans)
		{
			ans = mid;
		}
		
		bsearch(l, mid - 1);
	}
	// ���i�H�A�ոեk�� 
	else
	{
		bsearch(mid + 1, r);
	}
}

int main()
{
	// ��J 
	cin >> A >> B >> C;
	ans = (A * C / B) + 1;
	// �j�M 
	bsearch(0, ans);
	// ��X 
	cout << ans << endl;

    return 0;
}

