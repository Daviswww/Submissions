#include<iostream>  
#include<cstdio>  
#include<algorithm>  
#include<cmath>
#define maxn 10001 
 
using namespace std;  

int main(void)  
{  
	double a[maxn];  
	int n, k, maxx = -1;  
    scanf("%d%d", &n, &k);  
    for (int i = 0; i < n; i++)  
    {  
        scanf("%lf", &a[i]);  
        a[i] *= 100; //����ഫ 
        maxx = max(maxx, (int)a[i]);
    }
    puts("");
    int left = 0, right = maxx, ans = 0;
	 
    while (right >= left)
    {  
        int num = 0, mid = left + (right - left) / 2; //�]���p��0.01���N�����  
        cout << mid << " ";
        for (int i = 0; i < n; i++) num += a[i] / mid;
        cout << num << " ";
        if (num >= k)  
        {  
            left = mid + 1;           
            ans = max(ans, mid); //�n��̤j�ȨåB���O�Ҧ������Ψ�A�ҥH���ݦb >=k
        }
        else right = mid - 1;  
    }  
    printf("%.2lf\n", (double)ans/100.0);  
    return 0;  
}  
