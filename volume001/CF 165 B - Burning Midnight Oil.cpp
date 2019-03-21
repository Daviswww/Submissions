#include <iostream>
using namespace std;

// �ھڪ�l����ƭp���`��� 
int count(int v, int k)
{
	long long ret = 0, under = 1;
	while(v >= under)
	{
		ret += (v / under);
		under *= k;
	}
	
	return ret;
}

int bsearch(int target, int k, int l, int r, int ans)
{
	// �S�o��F 
	if(l >= r)
	{
		return ans;
	}
	
	// �䤤�� 
	int mid = (l + r) / 2, lines = count(mid, k);
	
	// ���n�A�������צ^�� 
	if(lines == target)
	{
		ans = mid;
		return ans;
	}
	// �����A��j�@�I�� 
	else if(lines < target)
	{
		return bsearch(target, k, mid + 1, r, ans);
	}
	// ���F�A���ݭn���n�O�U�ӡA�A��ݬݦ��S����p�� 
	else
	{
		if(mid < ans)
		{
			ans = mid;
		}
		
		return bsearch(target, k, l, mid, ans);
	}
	
	return ans;
}

int main()
{
	int N, K;
	cin >> N >> K;
	
	cout << bsearch(N, K, 0, N + 1, N) << endl;

    return 0;
}

