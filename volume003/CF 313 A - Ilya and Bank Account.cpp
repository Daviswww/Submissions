#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	// �p��R�h�̫�@���˼ƲĤG�쪺�Ʀr 
	int A = N / 10, B = N / 100 * 10 + N % 10;

	// ���ơA������X 
	if(N >= 0)
	{
		cout << N << endl;
	} 
	// �R�h�̫�@�쪺����j 
	else if(A > B)
	{
		cout << A << endl;
	}
	// �R�h�˼ƲĤG�쪺����j 
	else
	{
		cout << B << endl;
	}

    return 0;
}

