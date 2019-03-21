#include <iostream>
#include <cmath>
using namespace std;

int N, M, K;
int ans;

// �p���K�ӤH����n���ɭ��`�q�O�h�� 
long long total(int n)
{
	// a = �̥���Ab = �s�Ϊ������I�Ac = �̰��I�Ad = �s�Ϊ��k���I�Ae = �̥k�� 
	long long a, b, c, d, e;
	c = K;
	b = max(1, K - n + 1);
	d = min(N + 1, K + n);
	a = 1;
	e = N + 1;
	
	long long ret = 0;
	// a ~ b = ���׬�1������ΡAb ~ c = ���W����ΡAc ~ d = ������(�t���I)�Ad ~ e = ���׬�1������� 
	ret = (b - a) * 1 + (c - b) * (n - 1 + n - c + b) / 2 + (d - c) * (n + n - d + c + 1) / 2 + (e - d) * 1;
	return ret;
}

int bsearch(int l, int r)
{
	// �S�o��F�A�^�� 
	if(l >= r)
	{
		return ans;
	}
	
	// �䤤�� 
	int mid = (l + r) / 2;
	long long t = total(mid);
	// �`�qOK�A�ݻݤ��ݭn�O�U�ӡA�M����ݯण���j 
	if(t <= M)
	{
		if(mid > ans)
		{
			ans = mid;
		}
		return bsearch(mid + 1, r);
	}
	// �`�q��OK�A��p�@�I�� 
	else
	{
		return bsearch(l, mid);
	}
	
	return ans;
}

int main()
{	
	cin >> N >> M >> K;
	cout << bsearch(0, M + 1);

    return 0;
}

