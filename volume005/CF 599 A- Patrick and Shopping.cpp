#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int D[3];
	
	// ��J 
	for(int i = 0; i < 3; ++i)
	{
		cin >> D[i];
	}
	
	// ¶�@�� 
	int all = D[0] + D[1] + D[2];
	// �����Ĥ@�� 
	int n0 = 2 * (D[1] + D[2]);
	// �����ĤG�� 
	int n1 = 2 * (D[0] + D[2]);
	// �����ĤT�� 
	int n2 = 2 * (D[0] + D[1]);
	
	// ��X�̵u�� 
	cout << min(all, min(n0, min(n1, n2))) << endl; 

    return 0;
}

