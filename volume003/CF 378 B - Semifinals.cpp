#include <iostream>
using namespace std;

// �}�C�̤j���� 
#define AMAX (int)1e5 + 5

int main()
{
	int N, A[AMAX], B[AMAX], a = 0, b = 0;

	// 	��J 
	cin >> N;	
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i] >> B[i];
	}
	
	// �p���`�W���eN�W������� 
	while(a + b < N)
	{
		if(A[a] > B[b])
		{
			++b;
		}
		else if(A[a] < B[b])
		{
			++a;
		}
	}
	
	// ��X�Ĥ@�����ɪ� 
	for(int i = 0; i < N; ++i)
	{
		// �eN/2�W�άO�`�W���eN�W 
		if(i < N / 2 || i < a)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	cout << endl;
	
	// ��X�ĤG�����ɪ� 
	for(int i = 0; i < N; ++i)
	{
		// �eN/2�W�άO�`�W���eN�W 
		if(i < N / 2 || i < b)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	cout << endl;

    return 0;
}

