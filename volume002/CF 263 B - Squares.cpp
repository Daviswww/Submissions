#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, K;
	int Square[50];
	cin >> N >> K;
	for(int i = 0; i < N; ++i)
	{
		cin >> Square[i];
	} 
	
	// �q�p�ƨ�j 
	sort(Square, Square + N);
	
	// �q�j���}�l�ơA��K�ӡA��XX�b�W���y�� 
	// ��o�� 
	if(N - K >= 0)
	{
		cout << Square[N - K] << " 0" << endl;
	}
	// �䤣�� 
	else
	{
		cout << -1 << endl;
	}

    return 0;
}

